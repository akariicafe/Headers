@interface RemindersUICore.TTRUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken> {
    void /* unknown type, empty encoding */ userDefaultsKey;
    void /* unknown type, empty encoding */ block;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ removed;
}

- (void)stopObserving;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
