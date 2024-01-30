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

- (id)preferenceDomain;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)setMixesWithMedia:(BOOL)a0;
- (void)setForceMixingBehavior:(BOOL)a0;
- (void)setRelativeVolume:(double)a0;
- (double)mediaVolume;
- (void)setStopsOnLock:(BOOL)a0;
- (void)setLastEnablementTimestamp:(double)a0;
- (void)setComfortSoundsEnabled:(BOOL)a0;
- (void)logMessage:(id)a0;
- (BOOL)mixesWithMedia;
- (id)keysToSync;
- (double)lastEnablementTimestamp;
- (BOOL)stopsOnLock;
- (BOOL)comfortSoundsAvailable;
- (void)reset;
- (void)setMediaVolume:(double)a0;
- (BOOL)forceMixingBehavior;
- (BOOL)comfortSoundsEnabled;
- (double)relativeVolume;
- (BOOL)shouldStoreLocally;

@end
