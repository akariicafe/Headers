@class NSSet, NSDictionary;

@interface VCSessionMediaStreamPresenceConfigurationProvider : NSObject {
    NSDictionary *_configuration;
}

@property (readonly, nonatomic) NSSet *streamInputConfigurations;
@property (readonly, nonatomic) NSSet *streamGroupConfigurations;

+ (id)resourceNameForConfigurationType:(unsigned int)a0;
+ (id)loadSessionConfigurationWithResourceName:(id)a0;
+ (unsigned int)streamSSRCForStreamGroupID:(unsigned int)a0 streamIndex:(int)a1;

- (void)dealloc;
- (id)newStreamInputConfigurations;
- (id)newStreamGroupConfigurationsWithSupportedAudioRules:(id)a0 streamIDGenerator:(id)a1;
- (id)newVideoStreamInputConfigurationWithPList:(id)a0;
- (id)newDataStreamInputConfigurationWithPList:(id)a0;
- (id)getVideoCodecConfigFromStreamConfigPList:(id)a0;
- (long long)getVideoCodecFromStreamCodecPList:(id)a0;
- (BOOL)checkEncoderSupportForCodecType:(long long)a0;
- (id)newVideoMultiwayConfigWithPList:(id)a0 codecType:(long long)a1 streamIDGenerator:(id)a2 ssrc:(unsigned int)a3;
- (struct CGSize { double x0; double x1; })computeEncoderResolution:(unsigned long long)a0;
- (void)updateStreamConfig:(id)a0 forPayload:(int)a1 networkPayload:(unsigned int)a2 groupID:(unsigned int)a3;
- (id)newVideoStreamGroupStreamConfigWithPList:(id)a0 streamIDGenerator:(id)a1 ssrc:(unsigned int)a2 groupID:(unsigned int)a3 shouldSkip:(BOOL *)a4;
- (unsigned short)setParentStreamID:(unsigned short)a0 videoConfig:(id)a1;
- (BOOL)addPayload:(int)a0 audioStreamConfig:(id)a1 supportedAudioRules:(id)a2;
- (BOOL)setupRedFactorsWithPList:(id)a0 audioStreamConfig:(id)a1;
- (BOOL)setupAudioRedWithPlist:(id)a0 audioStreamConfig:(id)a1 supportedAudioRules:(id)a2;
- (BOOL)setupAudioRulesWithPList:(id)a0 audioStreamConfig:(id)a1 supportedAudioRules:(id)a2;
- (id)newAudioMultiwayConfigWithPList:(id)a0 audioRules:(id)a1 maxIDSStreamIDCount:(unsigned int)a2 streamIDGenerator:(id)a3 ssrc:(unsigned int)a4;
- (id)newAudioStreamGroupStreamConfigWithPList:(id)a0 supportedAudioRules:(id)a1 maxIDSStreamIDCount:(unsigned int)a2 streamIDGenerator:(id)a3 ssrc:(unsigned int)a4 groupID:(unsigned int)a5;
- (BOOL)setupVideoStreamGroupStreams:(id)a0 streamGroupConfig:(id)a1 streamIDGenerator:(id)a2;
- (BOOL)setupAudioStreamGroupStreams:(id)a0 streamGroupConfig:(id)a1 supportedAudioRules:(id)a2 streamIDGenerator:(id)a3;
- (id)newStreamGroupConfigurationWithPList:(id)a0 supportedAudioRules:(id)a1 streamIDGenerator:(id)a2;
- (id)initWithConfigurationType:(unsigned int)a0 supportedAudioRules:(id)a1 streamIDGenerator:(id)a2;
- (BOOL)checkEncoderSupportForConfig:(id)a0;

@end
