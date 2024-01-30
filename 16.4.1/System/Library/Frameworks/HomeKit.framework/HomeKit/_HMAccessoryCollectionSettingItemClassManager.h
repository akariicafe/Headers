@class NSSet, NSMutableDictionary;

@interface _HMAccessoryCollectionSettingItemClassManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_classes;
}

@property (class, readonly) _HMAccessoryCollectionSettingItemClassManager *sharedManager;
@property (class, readonly, copy) NSSet *defaultItemValueClasses;

- (id)init;
- (void).cxx_destruct;
- (void)setItemValueClasses:(id)a0 forKeyPath:(id)a1;
- (BOOL)hasCustomItemValueClassesForKeyPath:(id)a0;
- (id)itemValueClassesForKeyPath:(id)a0;
- (void)removeItemValueClassesForKeyPath:(id)a0;

@end
