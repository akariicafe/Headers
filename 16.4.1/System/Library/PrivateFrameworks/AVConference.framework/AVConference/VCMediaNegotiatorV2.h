@interface VCMediaNegotiatorV2 : VCMediaNegotiatorBase

+ (unsigned int)capabilitiesWithMomentSettings:(id)a0;
+ (void)dumpRemoteNegotiationData:(id)a0 forceFileDump:(BOOL)a1;
+ (BOOL)initializeLocalConfiguration:(id)a0 negotiationData:(id)a1 deviceRole:(int)a2 preferredAudioPayload:(int)a3;
+ (id)newCompressedBlob:(id)a0;
+ (id)newDecompressedBlob:(id)a0;
+ (id)newUnserializedMediaBlob:(id)a0;
+ (id)remoteFeatureStringWithRemoteMediaBlob:(id)a0;
+ (id)streamGroupIDsWithMediaBlob:(id)a0;
+ (BOOL)updateCameraU1Config:(id)a0 forNegotiationBlob:(id)a1 localSupportedVideoPayloads:(id)a2;
+ (BOOL)updateScreenU1ConfigWithStreamGroupConfig:(id)a0 forNegotiationBlob:(id)a1 localSupportedVideoPayloads:(id)a2;
+ (BOOL)updateStreamGroupU1Config:(id)a0 forGroupId:(unsigned int)a1 withNegotiationBlob:(id)a2 localSupportedVideoPayloads:(id)a3;

- (BOOL)appendCodecFeaturesToMediaBlob:(id)a0;
- (id)negotiationData;
- (BOOL)appendBandwidthSettingsToMediaBlob:(id)a0;
- (BOOL)appendCameraOneToOneSettingsToMediaBlob:(id)a0;
- (BOOL)appendGeneralInfoToMediaBlob:(id)a0;
- (BOOL)appendMicrophoneOneToOneSettingsToMediaBlob:(id)a0;
- (BOOL)appendMomentsSettingsToMediaBlob:(id)a0;
- (BOOL)appendStreamGroupsToMediaBlob:(id)a0;
- (BOOL)negotiateStreamGroupConfig:(id)a0 remoteInviteBlob:(id)a1;
- (BOOL)negotiateU1SettingsForStreamGroup:(id)a0;
- (id)newNegotiatedSystemAudioResultsWithRemoteMediaBlob:(id)a0;
- (BOOL)processRemoteNegotiationData:(id)a0;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)a0 connectionType:(int)a1;
- (BOOL)selectBestDecodeVideoRuleForTransport:(unsigned char)a0 payload:(int)a1 localVideoRuleCollection:(id)a2 remoteVideoRuleCollection:(id)a3;
- (void)setupNegotiatedAudioResultsWithRemoteMediaBlob:(id)a0;
- (void)setupNegotiatedFaceTimeSettingsWithRemoteMediaBlob:(id)a0;
- (BOOL)setupNegotiatedMomentsResultsWithRemoteMediaBlob:(id)a0;
- (BOOL)setupNegotiatedResultsWithRemoteMediaBlob:(id)a0;
- (BOOL)setupNegotiatedVideoSettingsWithRemoteMediaBlob:(id)a0;
- (BOOL)setupStreamGroupsWithRemoteMediaBlob:(id)a0;

@end
