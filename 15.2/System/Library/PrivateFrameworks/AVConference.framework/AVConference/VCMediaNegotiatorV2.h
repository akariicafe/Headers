@interface VCMediaNegotiatorV2 : VCMediaNegotiatorBase

+ (id)newCompressedBlob:(id)a0;
+ (void)dumpRemoteNegotiationData:(id)a0 forceFileDump:(BOOL)a1;
+ (id)newDecompressedBlob:(id)a0;
+ (unsigned int)capabilitiesWithMomentSettings:(id)a0;
+ (BOOL)initializeLocalConfiguration:(id)a0 negotiationData:(id)a1 deviceRole:(int)a2 preferredAudioPayload:(int)a3;

- (BOOL)appendGeneralInfoToMediaBlob:(id)a0;
- (BOOL)appendBandwidthSettingsToMediaBlob:(id)a0;
- (BOOL)appendCodecFeaturesToMediaBlob:(id)a0;
- (BOOL)appendMicrophoneOneToOneSettingsToMediaBlob:(id)a0;
- (BOOL)appendCameraOneToOneSettingsToMediaBlob:(id)a0;
- (BOOL)appendMomentsSettingsToMediaBlob:(id)a0;
- (BOOL)appendStreamGroupsToMediaBlob:(id)a0;
- (BOOL)setupNegotiatedResultsWithRemoteMediaBlob:(id)a0;
- (void)setupNegotiatedAudioResultsWithRemoteMediaBlob:(id)a0;
- (void)setupNegotiatedFaceTimeSettingsWithRemoteMediaBlob:(id)a0;
- (BOOL)setupNegotiatedVideoSettingsWithRemoteMediaBlob:(id)a0;
- (BOOL)setupNegotiatedMomentsResultsWithRemoteMediaBlob:(id)a0;
- (BOOL)setupStreamGroupsWithRemoteMediaBlob:(id)a0;
- (void)setupNegotiatedAudioPayloadsWithRemoteMediaBlob:(id)a0;
- (void)applyCellularPreferredRule:(id)a0;
- (id)negotiateVideoMaxResolutionWithEncodeRules:(id)a0 decodeRules:(id)a1 isEncoder:(BOOL)a2;
- (id)remoteFeatureStringWithRemoteMediaBlob:(id)a0;
- (BOOL)selectBestVideoRuleForTransport:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2 remoteVideoRuleCollection:(id)a3;
- (BOOL)negotiateStreamGroupConfig:(id)a0;
- (id)negotiationData;
- (BOOL)processRemoteNegotiationData:(id)a0;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)a0 connectionType:(int)a1;
- (BOOL)selectBestDecodeVideoRuleForTransport:(unsigned char)a0 payload:(int)a1 remoteVideoRuleCollection:(id)a2;

@end
