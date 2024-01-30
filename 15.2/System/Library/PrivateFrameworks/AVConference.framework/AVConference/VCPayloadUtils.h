@interface VCPayloadUtils : NSObject

+ (int)payloadForCodecType:(long long)a0;
+ (unsigned int)bitrateForAMRCodecMode:(int)a0;
+ (unsigned int)bitrateForAMRWBCodecMode:(int)a0;
+ (unsigned int)bitrateForEVSCodecMode:(int)a0;
+ (long long)codecTypeForPayload:(int)a0;
+ (unsigned int)bitrateForCodecType:(long long)a0 mode:(int)a1;
+ (unsigned int)codecSamplesPerFrameForPayload:(int)a0 blockSize:(double)a1;
+ (BOOL)isUseCaseWatchContinuity:(int)a0 primaryPayload:(int)a1;
+ (BOOL)isPayloadSupportedInFaceTime:(int)a0;
+ (unsigned int)sampleRateForPayload:(int)a0;
+ (BOOL)canSetBitrateForPayload:(int)a0;
+ (BOOL)shouldUseCookieForPayload:(int)a0;
+ (BOOL)canBundleExternallyForPayload:(int)a0 forBundlingScheme:(int)a1 operatingMode:(int)a2;
+ (unsigned int)internalBundleFactorForPayload:(int)a0;
+ (BOOL)shouldEnablePacketSizeLimitForPayload:(int)a0;
+ (float)qualityForPayload:(int)a0 forBitrate:(unsigned int)a1;
+ (BOOL)supportsCodecRateModesForCodecType:(long long)a0;
+ (long long)ctAudioCodecTypeForMediaStreamCodec:(long long)a0;
+ (long long)ctAudioCodecEVSBandwidthForMediaStreamCodec:(long long)a0;
+ (long long)ctAudioCodecEVSBitrateForBitrate:(unsigned int)a0;

@end
