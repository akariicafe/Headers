@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (id)isNowPlayingEnabled;
- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (void)_updateBoolValueForTrackedKey:(id)a0;
- (void)_setIsSportsEnabled:(BOOL)a0;
- (id)isSportsEnabled;
- (void).cxx_destruct;
- (id)init;
- (void)updateTrackedBagValues;
- (BOOL)_amsBagBoolValueForKey:(id)a0;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;
- (void)_updateKeys:(id)a0;

@end
