@class VCMediaNegotiatorResultsCaptions;

@interface VCMediaNegotiator : VCMediaNegotiatorBase {
    BOOL _negotiationDone;
}

@property (readonly, nonatomic) long long negotiationMode;
@property (readonly, nonatomic) BOOL isCaller;
@property (readonly, nonatomic) BOOL usePreNegotiation;
@property (readonly, nonatomic) VCMediaNegotiatorResultsCaptions *negotiatedCaptionsSettings;
@property (readonly, nonatomic) BOOL isCellular16x9Capable;

+ (void)dumpBlob:(id)a0 prefix:(id)a1 force:(BOOL)a2;
+ (BOOL)initializeLocalConfiguration:(id)a0 negotiationData:(id)a1 deviceRole:(int)a2 preferredAudioPayload:(int)a3;
+ (id)localConfigurationWithData:(id)a0 deviceRole:(int)a1 preferredAudioPayload:(int)a2;
+ (unsigned int)mappedRemoteQualityIndexForQualityIndex:(unsigned int)a0;
+ (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)a0 remoteFeaturesString:(id)a1;
+ (id)negotiationBlobFromData:(id)a0;
+ (id)newCompressedBlob:(id)a0;
+ (id)newDecompressedBlob:(id)a0;
+ (id)streamGroupIDsWithMediaBlob:(id)a0;
+ (BOOL)validateLocalConfiguration:(id)a0;
+ (BOOL)validateMultiwayAudioStreamConfigurations:(id)a0;
+ (BOOL)validateMultiwayVideoStreamConfigurations:(id)a0;

- (void)dealloc;
- (id)negotiationData;
- (id)newResponseBlob;
- (BOOL)addBandwidthSettingsForMediaBlob:(id)a0 operatingMode:(int)a1 connectionType:(int)a2 maxBitrate:(unsigned int)a3;
- (id)getPreferredScreenPayloadList;
- (id)initWithLocalSettings:(id)a0;
- (id)initWithMode:(long long)a0 localSettings:(id)a1;
- (BOOL)isCellular16x9EncodeCapable;
- (BOOL)isVideoStreamSupported:(int)a0;
- (id)localeWithMediaBlobLanguage:(int)a0;
- (int)mediaBlobLanguageWithLocale:(id)a0;
- (void)negotiateAudioAllowRecording:(id)a0;
- (BOOL)negotiateAudioDTXPayload:(id)a0;
- (BOOL)negotiateAudioPrimaryPayload:(id)a0;
- (BOOL)negotiateAudioREDPayload:(id)a0;
- (void)negotiateAudioSecondaryPayloads:(id)a0;
- (BOOL)negotiateAudioSettings:(id)a0;
- (void)negotiateAudioUseSBR:(id)a0;
- (BOOL)negotiateCaptionsWithCaptionsSettings:(id)a0;
- (BOOL)negotiateFaceTimeSettings:(id)a0;
- (BOOL)negotiateHDRMode:(id)a0 videoResults:(id)a1;
- (BOOL)negotiateMomentsWithMomentsSettings:(id)a0;
- (BOOL)negotiateMultiwayAudioStreams:(id)a0;
- (BOOL)negotiateMultiwayVideoStreams:(id)a0;
- (void)negotiateRTCPFB:(id)a0;
- (BOOL)negotiateScreenSettings:(id)a0;
- (void)negotiateTilesPerFrame:(id)a0 negotiatedSettings:(id)a1;
- (BOOL)negotiateVideoSettings:(id)a0;
- (id)newStreamConfigFromMultiwayAudioStream:(id)a0;
- (id)newStreamConfigFromMultiwayVideoStream:(id)a0;
- (id)newStreamGroupCodecConfigForPayload:(int)a0;
- (BOOL)processParameterSets:(id)a0 videoResults:(id)a1;
- (BOOL)processPixelFormats:(id)a0 videoResults:(id)a1;
- (BOOL)processRemoteNegotiationData:(id)a0;
- (BOOL)processResponseBlob:(id)a0;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)a0 connectionType:(int)a1;
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)a0;
- (BOOL)selectBestScreenRule:(id)a0 preferredPayloadOrder:(id)a1;
- (BOOL)selectBestVideoRuleForTransport:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2 localVideoRuleCollection:(id)a3 remoteVideoSettings:(id)a4 negotiatedVideoSettings:(id)a5 isScreen:(BOOL)a6;
- (id)selectVideoFeatureString:(id)a0 selectedPayload:(int)a1;
- (BOOL)setupAudioWithNegotiatedSettings:(id)a0;
- (BOOL)setupBandwidthSettingsForMediaBlob:(id)a0;
- (void)setupCaptionsForMediaBlob:(id)a0;
- (void)setupFaceTimeSettingsForMediaBlob:(id)a0 isResponse:(BOOL)a1;
- (void)setupMomentsForMediaBlob:(id)a0;
- (void)setupMultiwayAudioStreamsForMediaBlob:(id)a0;
- (void)setupMultiwayVideoStreamsForMediaBlob:(id)a0;
- (BOOL)setupScreenWithNegotiatedSettings:(id)a0;
- (BOOL)setupVideoWithNegotiatedSettings:(id)a0;

@end
