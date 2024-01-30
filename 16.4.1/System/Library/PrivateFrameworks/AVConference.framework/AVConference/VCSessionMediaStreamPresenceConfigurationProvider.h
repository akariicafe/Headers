@class NSSet, NSDictionary;

@interface VCSessionMediaStreamPresenceConfigurationProvider : NSObject {
    NSDictionary *_configuration;
}

@property (readonly, nonatomic) NSSet *streamInputConfigurations;
@property (readonly, nonatomic) NSSet *streamGroupConfigurations;

+ (id)bdatGroupDisabled;
+ (id)bdatOldGroupDisabled;
+ (id)defaultOneToOneTierTable:(unsigned int)a0;
+ (unsigned int)defaultRemainingBitrateSplit:(unsigned int)a0;
+ (id)fdatGroupDisabled;
+ (id)foregroundCameraOneToOneTierTable:(unsigned int)a0;
+ (unsigned int)foregroundCameraRemainingBitrateSplit:(unsigned int)a0;
+ (id)ftxtGroupDisabled;
+ (id)ftxtOldGroupDisabled;
+ (id)loadSessionConfigurationWithResourceName:(id)a0;
+ (id)oneToOneTierTableForStreamGroupID:(unsigned int)a0 splitType:(unsigned int)a1;
+ (id)publicSessionConfigurationForType:(unsigned int)a0;
+ (unsigned int)readUint32WithPList:(id)a0 key:(id)a1 defaultValue:(unsigned int)a2;
+ (unsigned int)remainingBitrateSplitQualityIndexForStreamGroup:(unsigned int)a0 splitType:(unsigned int)a1;
+ (id)replaceTag:(id)a0;
+ (id)resourceNameForConfigurationType:(unsigned int)a0;
+ (id)screenStreamBaseTierFramerate;
+ (id)sessionConfigurationForType:(unsigned int)a0;
+ (unsigned int)streamSSRCForStreamGroupID:(unsigned int)a0 streamIndex:(int)a1;

- (void)dealloc;
- (BOOL)setupAudioRulesWithPList:(id)a0 audioStreamConfig:(id)a1 supportedAudioRules:(id)a2;
- (BOOL)addPayload:(int)a0 audioStreamConfig:(id)a1 supportedAudioRules:(id)a2;
- (BOOL)checkEncoderSupportForCodecType:(long long)a0;
- (BOOL)checkEncoderSupportForConfig:(id)a0;
- (id)getVideoCodecConfigFromStreamConfigPList:(id)a0;
- (long long)getVideoCodecFromStreamCodecPList:(id)a0;
- (id)initWithConfigurationType:(unsigned int)a0 supportedAudioRules:(id)a1 streamIDGenerator:(id)a2;
- (id)newAudioMultiwayConfigWithPList:(id)a0 audioRules:(id)a1 maxIDSStreamIDCount:(unsigned int)a2 streamIDGenerator:(id)a3 ssrc:(unsigned int)a4;
- (id)newAudioStreamGroupStreamConfigWithPList:(id)a0 supportedAudioRules:(id)a1 maxIDSStreamIDCount:(unsigned int)a2 streamIDGenerator:(id)a3 ssrc:(unsigned int)a4 groupID:(unsigned int)a5;
- (id)newDataStreamInputConfigurationWithPList:(id)a0;
- (id)newStreamGroupConfigurationWithPList:(id)a0 supportedAudioRules:(id)a1 streamIDGenerator:(id)a2;
- (id)newStreamGroupConfigurationsWithSupportedAudioRules:(id)a0 streamIDGenerator:(id)a1;
- (id)newStreamInputConfigurations;
- (id)newVideoMultiwayConfigWithPList:(id)a0 codecType:(long long)a1 streamIDGenerator:(id)a2 ssrc:(unsigned int)a3;
- (id)newVideoStreamGroupStreamConfigWithPList:(id)a0 streamIDGenerator:(id)a1 ssrc:(unsigned int)a2 groupID:(unsigned int)a3 shouldSkip:(BOOL *)a4;
- (id)newVideoStreamInputConfigurationWithPList:(id)a0;
- (unsigned short)setParentStreamID:(unsigned short)a0 videoConfig:(id)a1;
- (BOOL)setupAudioRedWithPlist:(id)a0 audioStreamConfig:(id)a1 supportedAudioRules:(id)a2;
- (BOOL)setupAudioStreamGroupStreams:(id)a0 streamGroupConfig:(id)a1 supportedAudioRules:(id)a2 streamIDGenerator:(id)a3;
- (BOOL)setupRedFactorsWithPList:(id)a0 audioStreamConfig:(id)a1;
- (BOOL)setupVideoStreamGroupStreams:(id)a0 streamGroupConfig:(id)a1 streamIDGenerator:(id)a2;
- (void)updateStreamConfig:(id)a0 forPayload:(int)a1 networkPayload:(unsigned int)a2 groupID:(unsigned int)a3;

@end
