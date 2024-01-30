@class VCAudioPayloadConfig;

@interface VCAudioTier : NSObject {
    int _operatingMode;
    BOOL _bundlingAppliedByCodec;
}

@property (readonly) unsigned int networkBitrate;
@property (readonly) unsigned int audioCodecBitrate;
@property (readonly) unsigned int packetsPerBundle;
@property (readonly) unsigned int redNumPayloads;
@property (readonly) unsigned int redMaxDelay20ms;
@property (readonly) VCAudioPayloadConfig *payloadConfig;

+ (id)newAudioTierForPayloadConfig:(id)a0 operatingMode:(int)a1 audioCodecBitrate:(unsigned int)a2 packetsPerBundle:(unsigned int)a3 redNumPayloads:(unsigned int)a4 headerSize:(unsigned int)a5;
+ (BOOL)bundlingAppliedByCodecForPayload:(int)a0 operatingMode:(int)a1;

- (BOOL)isEqualTo:(id)a0;
- (id)description;
- (id)initWithNetworkBitrate:(unsigned int)a0 operatingMode:(int)a1 audioCodecBitrate:(unsigned int)a2 packetsPerBundle:(unsigned int)a3 redNumPayloads:(unsigned int)a4 payloadConfig:(id)a5;

@end
