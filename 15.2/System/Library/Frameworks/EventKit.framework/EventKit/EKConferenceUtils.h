@interface EKConferenceUtils : NSObject

+ (id)_workQueue;
+ (id)logHandle;
+ (double)conferenceImageSize;
+ (id)parentAppBundleIdentifierForExtensionBundleIdentifier:(id)a0;
+ (id)applicationRecordForURL:(id)a0;
+ (void)applicationRecordForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_applicationRecordFromAppLink:(id)a0 appLinkError:(id)a1 orCustomScheme:(id)a2;
+ (void)_findExtensionIdentifierForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)virtualConference:(id)a0 likelyCameFromRoomTypes:(id)a1 completionHandler:(id /* block */)a2;
+ (id)synchronousAppTitleOnlyForURL:(id)a0;
+ (void)invalidateConferenceURL:(id)a0;
+ (void)invalidateConferenceURLIfNeeded:(id)a0 inEventStore:(id)a1;

@end
