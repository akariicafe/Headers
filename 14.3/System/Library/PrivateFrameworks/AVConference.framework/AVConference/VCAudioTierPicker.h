@class VCAudioTier, NSMutableDictionary, BitrateLimits;

@interface VCAudioTierPicker : NSObject {
    NSMutableDictionary *tierTablesForRedNumPayloads;
    VCAudioTier *fallbackTier;
    BOOL usingCellular;
    BOOL useCaseWatchContinuity;
    int operatingMode;
    BitrateLimits *bitrateLimits;
    BOOL _alwaysOnAudioRedundancyEnabled;
    BOOL _cellularAllowRedLowBitratesEnabled;
    BOOL _wifiAllowRedLowBitratesEnabled;
}

@property (readonly) VCAudioTier *defaultTier;

+ (id)allPossibleCombinations:(id)a0 supportedPacketsPerBundle:(id)a1 redNumPayloads:(unsigned int)a2 headerSize:(unsigned int)a3 operatingMode:(int)a4 usingCellular:(BOOL)a5 useCaseWatchContinuity:(BOOL)a6;
+ (id)selectHighestQualityAudioTiers:(id)a0 forBitrateLimits:(id)a1 isHardLimit:(BOOL)a2;
+ (BOOL)arrayHasObject:(id)a0 withPayloadType:(int)a1;
+ (BOOL)shouldFilterTierForPayloadConfig:(id)a0 bitRate:(unsigned int)a1 packetsPerBundle:(unsigned int)a2 operatingMode:(int)a3 redNumPayloads:(unsigned int)a4 cellular:(BOOL)a5;
+ (id)valueForNetworkBitrate:(id)a0 networkBitrate:(unsigned int)a1;

- (void)dealloc;
- (void)printCreatedAudioTiers:(id)a0;
- (id)initWithOperatingMode:(int)a0 payloadConfigs:(id)a1 packetsPerBundle:(id)a2 supportedRedNumPayloads:(id)a3 headerSize:(unsigned long long)a4 usingCellular:(BOOL)a5 useCaseWatchContinuity:(BOOL)a6 defaultMaxCap:(unsigned long long)a7 alwaysOnAudioRedundancyEnabled:(BOOL)a8 cellularAllowRedLowBitratesEnabled:(BOOL)a9 wifiAllowRedLowBitratesEnabled:(BOOL)a10;
- (id)tierForNetworkBitrate:(unsigned long long)a0 withLegacyDuplication:(int)a1;
- (id)tierForNetworkBitrate:(unsigned long long)a0 withRedNumPayloads:(unsigned long long)a1;
- (id)allAudioTiers;

@end
