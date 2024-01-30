@class NSSet, NSMutableDictionary, HMFUnfairLock;

@interface _HMAccessoryCollectionSettingItemClassManager : NSObject {
    HMFUnfairLock *_lock;
    NSMutableDictionary *_classes;
}

@property (class, readonly) _HMAccessoryCollectionSettingItemClassManager *sharedManager;
@property (class, readonly, copy) NSSet *defaultItemValueClasses;

- (id)init;
- (void).cxx_destruct;
- (id)itemValueClassesForKeyPath:(id)a0;
- (void)setItemValueClasses:(id)a0 forKeyPath:(id)a1;

@end
