@class NSDictionary;

@interface WLKSettingsAMSBagTracker : NSObject

@property (retain, nonatomic) NSDictionary *trackedBagKeys;

+ (id)sharedTracker;

- (void)_updateBoolValueForTrackedKey:(id)a0;
- (id)isSportsEnabled;
- (void)_setIsNowPlayingEnabled:(BOOL)a0;
- (BOOL)_amsBagBoolValueForKey:(id)a0;
- (id)isNowPlayingEnabled;
- (id)init;
- (void)_setIsSportsEnabled:(BOOL)a0;
- (void)updateTrackedBagValuesWithChangedKeys:(id)a0;
- (void)updateTrackedBagValues;
- (void)_updateKeys:(id)a0;
- (void).cxx_destruct;

@end
