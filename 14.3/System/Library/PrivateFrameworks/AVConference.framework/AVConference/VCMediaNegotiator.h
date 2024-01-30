@class VCMediaNegotiatorResults, VCMediaNegotiatorFaceTimeSettingsResults, VCMediaNegotiatorAudioResults, VCMediaNegotiatorMomentsResults, VCMediaNegotiatorLocalConfiguration, VCMediaNegotiatorVideoResults, NSMutableArray, VCMediaNegotiatorCaptionsResults;

@interface VCMediaNegotiator : NSObject {
    BOOL _negotiationDone;
    BOOL _isCellular16x9Capable;
}

@property (readonly, nonatomic) long long negotiationMode;
@property (readonly, nonatomic) BOOL isCaller;
@property (readonly, nonatomic) BOOL usePreNegotiation;
@property (readonly, nonatomic) VCMediaNegotiatorLocalConfiguration *localSettings;
@property (readonly, nonatomic) VCMediaNegotiatorResults *negotiatedSettings;
@property (readonly, nonatomic) VCMediaNegotiatorAudioResults *negotiatedAudioSettings;
@property (readonly, nonatomic) VCMediaNegotiatorVideoResults *negotiatedVideoSettings;
@property (readonly, nonatomic) VCMediaNegotiatorVideoResults *negotiatedScreenSettings;
@property (readonly, nonatomic) VCMediaNegotiatorCaptionsResults *negotiatedCaptionsSettings;
@property (readonly, nonatomic) VCMediaNegotiatorMomentsResults *negotiatedMomentsSettings;
@property (readonly, nonatomic) VCMediaNegotiatorFaceTimeSettingsResults *negotiatedFaceTimeSettings;
@property (readonly, nonatomic) NSMutableArray *negotiatedMultiwayAudioStreams;
@property (readonly, nonatomic) NSMutableArray *negotiatedMultiwayVideoStreams;

+ (id)localConfigurationWithData:(id)a0 deviceRole:(int)a1 preferredAudioPayload:(int)a2;
+ (BOOL)validateLocalConfiguration:(id)a0;
+ (id)newCompressedBlob:(id)a0;
+ (void)dumpBlob:(id)a0 prefix:(id)a1 force:(BOOL)a2;
+ (id)newDecompressedBlob:(id)a0;
+ (id)negotiationBlobFromData:(id)a0;
+ (BOOL)validateMultiwayVideoStreamConfigurations:(id)a0;
+ (BOOL)validateMultiwayAudioStreamConfigurations:(id)a0;
+ (int)imageTypeBlobSettingsFromSet:(id)a0;
+ (int)videoCodecBlobSettingsFromSet:(id)a0;

- (BOOL)supportsHEIFEncoding;
- (void)dealloc;
- (BOOL)supportsHEVCEncoding;
- (id)initWithLocalSettings:(id)a0;
- (BOOL)processInviteBlob:(id)a0;
- (BOOL)processResponseBlob:(id)a0;
- (id)newInviteBlob;
- (id)newResponseBlob;
- (id)negotiatedFeaturesStringWithLocalFeaturesString:(id)a0 remoteFeaturesString:(id)a1;
- (unsigned int)remoteMaxBandwidthForOperatingMode:(int)a0 connectionType:(int)a1;
- (BOOL)isCellular16x9EncodeCapable;
- (BOOL)setupBandwidthSettingsForMediaBlob:(id)a0;
- (void)setupCaptionsForMediaBlob:(id)a0;
- (void)setupMomentsForMediaBlob:(id)a0;
- (void)setupFaceTimeSettingsForMediaBlob:(id)a0 isResponse:(BOOL)a1;
- (void)setupMultiwayAudioStreamsForMediaBlob:(id)a0;
- (void)setupMultiwayVideoStreamsForMediaBlob:(id)a0;
- (void)saveRemoteBandwidthSettingsWithMediaBlob:(id)a0;
- (BOOL)negotiateFaceTimeSettings:(id)a0;
- (BOOL)negotiateAudioSettings:(id)a0;
- (BOOL)negotiateVideoSettings:(id)a0;
- (BOOL)negotiateScreenSettings:(id)a0;
- (BOOL)negotiateCaptionsWithCaptionsSettings:(id)a0;
- (BOOL)negotiateMomentsWithMomentsSettings:(id)a0;
- (BOOL)negotiateMultiwayAudioStreams:(id)a0;
- (BOOL)negotiateMultiwayVideoStreams:(id)a0;
- (BOOL)setupAudioWithNegotiatedSettings:(id)a0;
- (BOOL)setupVideoWithNegotiatedSettings:(id)a0;
- (BOOL)setupScreenWithNegotiatedSettings:(id)a0;
- (BOOL)addBandwidthSettingsForMediaBlob:(id)a0 operatingMode:(int)a1 connectionType:(int)a2 maxBitrate:(unsigned int)a3;
- (void)negotiateAudioUseSBR:(id)a0;
- (void)negotiateAudioAllowRecording:(id)a0;
- (BOOL)negotiateAudioPrimaryPayload:(id)a0;
- (BOOL)negotiateAudioDTXPayload:(id)a0;
- (BOOL)negotiateAudioREDPayload:(id)a0;
- (void)negotiateAudioSecondaryPayloads:(id)a0;
- (id)negotiateVideoMaxResolutionWithEncodeRules:(id)a0 decodeRules:(id)a1 isEncoder:(BOOL)a2;
- (id)selectVideoFeatureString:(id)a0 selectedPayload:(int)a1;
- (BOOL)processParameterSets:(id)a0 videoResults:(id)a1;
- (void)negotiateRTCPFB:(id)a0;
- (id)getPreferredVideoPayloadList:(id)a0;
- (BOOL)canEncodeVideo:(id)a0;
- (BOOL)canDecodeVideo:(id)a0;
- (BOOL)selectBestVideoRuleForTransport:(unsigned char)a0 payload:(int)a1 encodingType:(unsigned char)a2 localVideoRuleCollection:(id)a3 remoteVideoSettings:(id)a4 negotiatedVideoSettings:(id)a5 isScreen:(BOOL)a6;
- (void)negotiateTilesPerFrame:(id)a0;
- (id)getPreferredScreenPayloadList;
- (BOOL)processPixelFormats:(id)a0 videoResults:(id)a1;
- (BOOL)selectBestScreenRule:(id)a0 preferredPayloadOrder:(id)a1;
- (BOOL)isVideoStreamSupported:(int)a0;
- (id)localeWithMediaBlobLanguage:(int)a0;
- (id)initWithMode:(long long)a0 localSettings:(id)a1;
- (int)mediaBlobLanguageWithLocale:(id)a0;

@end
