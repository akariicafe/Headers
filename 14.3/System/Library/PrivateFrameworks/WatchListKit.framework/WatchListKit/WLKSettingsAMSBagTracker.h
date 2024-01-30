@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_amsBagBoolValueForKey:(id)a0;
- (void)_setIsSportsEnabled:(BOOL)a0;
- (void)_updateBoolValueForTrackedKey:(id)a0;
- (void)updateTrackedBagValues;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;
- (id)isSportsEnabled;
- (void)_updateKeys:(id)a0;
- (id)isNowPlayingEnabled;

@end
