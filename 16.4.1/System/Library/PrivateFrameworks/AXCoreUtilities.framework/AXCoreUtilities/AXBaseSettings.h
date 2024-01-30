@class NSMutableSet, NSMutableDictionary;

@interface AXBaseSettings : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _domainNamesToSynchronizeLock;
}

@property (retain, nonatomic) NSMutableSet *registeredPreferenceKeys;
@property (retain, nonatomic) NSMutableDictionary *preferenceKeysByDomainNameToSynchronize;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;

- (id)allDomainNamesForPreferenceKey:(id)a0;
- (void)willPostNotificationForPreferenceKey:(id)a0 value:(id)a1;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (id)objectValueForPreferenceKey:(id)a0 ofClass:(Class)a1 defaultValue:(id)a2;
- (id)domainNameForPreferenceKey:(id)a0;
- (long long)integerValueForPreferenceKey:(id)a0 defaultValue:(long long)a1;
- (id)_userDefaultsStoreForDomainName:(id)a0;
- (void)_handlePreferenceChangedWithNotificationName:(id)a0;
- (void)clearExistingValueForPreferenceWithSelector:(SEL)a0;
- (void)_registerForNotification:(id)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (double)doubleValueForPreferenceKey:(id)a0 defaultValue:(double)a1;
- (BOOL)boolValueForPreferenceKey:(id)a0 defaultValue:(BOOL)a1;
- (BOOL)hasExistingValueForPreferenceWithSelector:(SEL)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (void)postNotificationForPreferenceKey:(id)a0;
- (id)valueForPreferenceKey:(id)a0;
- (BOOL)_switchFromRootUserIfNecessary:(id /* block */)a0;
- (void)willPerformUpdateBlocksForPreferenceKey:(id)a0;
- (id)notificationNameForPreferenceKey:(id)a0;
- (void)_synchronizeIfNecessaryForPreferenceKey:(id)a0 domainName:(id)a1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void).cxx_destruct;

@end
