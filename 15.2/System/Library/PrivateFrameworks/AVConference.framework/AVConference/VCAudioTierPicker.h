@class VCAudioTier, NSMutableDictionary, BitrateLimits;

@interface VCAudioTierPicker : NSObject {
    NSMutableDictionary *_tierTablesForRedNumPayloads;
    VCAudioTier *_fallbackTier;
    BitrateLimits *_bitrateLimits;
}

@property struct { int mode; struct __CFArray *supportedAudioPayloadConfigs; struct __CFArray *supportedPacketsPerBundle; struct __CFArray *supportedRedNumPayloads; unsigned int headerSize; BOOL usingCellular; BOOL isUseCaseWatchContinuity; unsigned int defaultMaxCap; BOOL alwaysOnAudioRedundancyEnabled; BOOL cellularAllowRedLowBitratesEnabled; BOOL wifiAllowRedLowBitratesEnabled; } config;
@property (readonly) VCAudioTier *defaultTier;

+ (id)allPossibleCombinations:(id)a0 supportedPacketsPerBundle:(id)a1 redNumPayloads:(unsigned int)a2 headerSize:(unsigned int)a3 tierPickerMode:(int)a4 usingCellular:(BOOL)a5 useCaseWatchContinuity:(BOOL)a6;
+ (id)selectHighestQualityAudioTiers:(id)a0 forBitrateLimits:(id)a1 isHardLimit:(BOOL)a2;
+ (BOOL)arrayHasObject:(id)a0 withPayloadType:(int)a1;
+ (int)tierPickerModeToAVConferenceOperatingMode:(int)a0;
+ (BOOL)shouldFilterTierForPayloadConfig:(id)a0 bitRate:(unsigned int)a1 packetsPerBundle:(unsigned int)a2 mode:(int)a3 redNumPayloads:(unsigned int)a4 cellular:(BOOL)a5;
+ (id)valueForNetworkBitrate:(id)a0 networkBitrate:(unsigned int)a1;
+ (int)operatingModeToTierPickerMode:(int)a0;

- (void)dealloc;
- (id)initWithConfig:(struct { int x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; })a0;
- (BOOL)setupTierPickerForConfig:(struct { int x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; })a0;
- (id)configToString:(struct { int x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; })a0;
- (void)logTierPickerConfig:(struct { int x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; })a0;
- (void)setupAlwaysOnRedTiersForSupportedRed:(id)a0;
- (void)printCreatedAudioTiers:(id)a0;
- (BOOL)reconfigureTierPicker:(struct { int x0; struct __CFArray *x1; struct __CFArray *x2; struct __CFArray *x3; unsigned int x4; BOOL x5; BOOL x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; })a0;
- (id)tierForNetworkBitrate:(unsigned long long)a0 withLegacyDuplication:(int)a1;
- (id)tierForNetworkBitrate:(unsigned long long)a0 withRedNumPayloads:(unsigned long long)a1;
- (id)allAudioTiers;

@end
