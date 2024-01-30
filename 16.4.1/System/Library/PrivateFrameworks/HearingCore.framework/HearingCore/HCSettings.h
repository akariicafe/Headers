@class NSMutableDictionary, NPSDomainAccessor, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HCSettings : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;
@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSDomainAccessor *globalDomainAccessor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nanoDomainAccessorQueue;

- (id)keysToSync;
- (id)preferenceDomainForPreferenceKey:(id)a0;
- (void)logMessage:(id)a0;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)_handlePreferenceChanged:(id)a0;
- (id)objectValueForKey:(id)a0 withClass:(Class)a1 andDefaultValue:(id)a2;
- (long long)integerValueForKey:(id)a0 withDefaultValue:(long long)a1;
- (void)_synchronizeIfNecessary:(id)a0;
- (void)_registerForNotification:(id)a0;
- (void)registerUpdateBlock:(id /* block */)a0 forRetrieveSelector:(SEL)a1 withListener:(id)a2;
- (void)pairedWatchDidChange:(id)a0;
- (id)preferenceKeyForSelector:(SEL)a0;
- (BOOL)_switchFromRootUserIfNecessary:(id /* block */)a0;
- (void)dealloc;
- (id)_valueForPreferenceKey:(id)a0;
- (id)init;
- (BOOL)shouldStoreLocally;
- (void).cxx_destruct;
- (id)nanoDomainAccessor;
- (BOOL)boolValueForPreferenceKey:(id)a0 withDefaultValue:(BOOL)a1;
- (double)cgfloatValueForPreferenceKey:(id)a0 withDefaultValue:(double)a1;
- (id)nanoPreferenceDomain;
- (id)notificationForPreferenceKey:(id)a0;
- (void)resetValueForSelector:(SEL)a0;

@end
