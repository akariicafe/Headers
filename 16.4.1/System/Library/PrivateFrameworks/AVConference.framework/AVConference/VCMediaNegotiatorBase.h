@class NSString, VCMediaNegotiatorResults, VCMediaNegotiatorResultsAudio, VCMediaNegotiatorResultsMoments, VCMediaNegotiatorResultsVideo, NSMutableArray, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorResultsFaceTimeSettings;

@interface VCMediaNegotiatorBase : NSObject <VCMediaNegotiatorProtocol> {
    VCMediaNegotiatorResultsAudio *_negotiatedSystemAudioResults;
}

@property (readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsAudio *negotiatedAudioSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedVideoSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsVideo *negotiatedScreenSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsMoments *negotiatedMomentsSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResultsFaceTimeSettings *negotiatedFaceTimeSettings;
@property (readonly, nonatomic) NSMutableArray *negotiatedStreamGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyCellularPreferredRule:(id)a0;
+ (id)getPreferredVideoPayloadList:(id)a0 localSupportedPayloads:(id)a1;
+ (BOOL)initializeLocalConfiguration:(id)a0 negotiationData:(id)a1 deviceRole:(int)a2 preferredAudioPayload:(int)a3;
+ (id)negotiateVideoMaxResolutionWithEncodeRules:(id)a0 decodeRules:(id)a1 isEncoder:(BOOL)a2;
+ (BOOL)selectBestVideoRuleForTransport:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2 videoSettings:(id)a3 localVideoRuleCollection:(id)a4 remoteVideoRuleCollection:(id)a5;
+ (void)setupNegotiatedAudioPayloads:(id)a0 negotiatedAudioSettings:(id)a1 primaryPayloadPreference:(id)a2;
+ (id)streamGroupIDsWithMediaBlob:(id)a0;
+ (void)updateScreenRuleCollections:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

- (void)dealloc;
- (id)negotiationData;
- (id)initWithLocalSettings:(id)a0;
- (id)negotiatedResultsForGroupID:(unsigned int)a0;
- (id)negotiatedResultsForGroupID:(unsigned int)a0 localU1Config:(id)a1 remoteU1Config:(id)a2;
- (id)negotiatedStreamGroupConfigForGroupID:(unsigned int)a0 negotiatedStreamGroupConfigs:(id)a1;
- (BOOL)processRemoteNegotiationData:(id)a0;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)a0 connectionType:(int)a1;

@end
