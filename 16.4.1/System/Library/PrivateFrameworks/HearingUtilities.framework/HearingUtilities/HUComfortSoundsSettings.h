@class HUComfortSound;

@interface HUComfortSoundsSettings : HCSettings

@property (nonatomic) BOOL comfortSoundsEnabled;
@property (nonatomic) BOOL mixesWithMedia;
@property (nonatomic) BOOL stopsOnLock;
@property (retain, nonatomic) HUComfortSound *selectedComfortSound;
@property (nonatomic) double relativeVolume;
@property (nonatomic) double mediaVolume;
@property (nonatomic) double lastEnablementTimestamp;
@property (nonatomic) BOOL forceMixingBehavior;

+ (id)sharedInstance;

- (id)keysToSync;
- (BOOL)comfortSoundsAvailable;
- (void)setMixesWithMedia:(BOOL)a0;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)logMessage:(id)a0;
- (double)relativeVolume;
- (BOOL)comfortSoundsEnabled;
- (void)setForceMixingBehavior:(BOOL)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (double)lastEnablementTimestamp;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (BOOL)mixesWithMedia;
- (double)mediaVolume;
- (BOOL)stopsOnLock;
- (void)setMediaVolume:(double)a0;
- (BOOL)forceMixingBehavior;
- (void)setRelativeVolume:(double)a0;
- (BOOL)shouldStoreLocally;
- (void)setStopsOnLock:(BOOL)a0;
- (void)setLastEnablementTimestamp:(double)a0;
- (void)reset;

@end
