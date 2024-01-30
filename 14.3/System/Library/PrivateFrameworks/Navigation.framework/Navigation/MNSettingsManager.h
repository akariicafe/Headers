@class MNSettings, MNObserverHashTable;

@interface MNSettingsManager : NSObject {
    MNObserverHashTable *_observers;
}

@property (readonly, nonatomic) MNSettings *settings;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)updateForSettings:(id)a0;
- (void)setVolumeFromDefaults;

@end
