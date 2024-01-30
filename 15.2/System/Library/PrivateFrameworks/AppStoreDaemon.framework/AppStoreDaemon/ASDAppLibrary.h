@class NSString, ASDServiceBroker, ASDNotificationCenter;

@interface ASDAppLibrary : NSObject <ASDServiceProvider> {
    ASDServiceBroker *_serviceBroker;
    ASDNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)launchMessagesExtensionForApp:(id)a0 withResultHandler:(id /* block */)a1;
+ (id)interface;
+ (void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)a0 withResultHandler:(id /* block */)a1;
+ (void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)a0 withResultHandler:(id /* block */)a1;
+ (long long)launchMessagesExtensionForApp:(id)a0;
+ (void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)a0 withResultHandler:(id /* block */)a1;
+ (long long)launchApp:(id)a0;
+ (long long)launchApp:(id)a0 onPairedDevice:(id)a1;
+ (unsigned char)openableStatusForExecutableAtPath:(id)a0;
+ (void)launchApp:(id)a0 onPairedDevice:(id)a1 withResultHandler:(id /* block */)a2;
+ (void)launchApp:(id)a0 withResultHandler:(id /* block */)a1;
+ (void)uninstallApp:(id)a0 requestUserConfirmation:(BOOL)a1 withResultHandler:(id /* block */)a2;
+ (void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)a0 withResultHandler:(id /* block */)a1;
+ (void)uninstallApp:(id)a0 withResultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (id)_initWithServiceBroker:(id)a0 notificationCenter:(id)a1;

@end
