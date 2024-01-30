@class NSString;

@interface EKConferenceUtils : NSObject

@property (class, readonly, nonatomic) NSString *FacetimeAppBundleID;
@property (class, readonly, nonatomic) NSString *FacetimeConferenceExtensionBundleID;

+ (id)logHandle;
+ (id)_workQueue;
+ (id)_applicationRecordFromAppLink:(id)a0 appLinkError:(id)a1 orCustomScheme:(id)a2;
+ (void)_findExtensionIdentifierForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (void)_findRoomTypeForURL:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (id)_validURLForConferenceURL:(id)a0 previousURLs:(id)a1 completion:(id /* block */)a2;
+ (void)applicationRecordForURL:(id)a0 completionHandler:(id /* block */)a1;
+ (id)applicationRecordForURL:(id)a0 incomplete:(BOOL *)a1;
+ (double)conferenceImageSize;
+ (void)invalidateConferenceURL:(id)a0;
+ (void)invalidateConferenceURLIfNeeded:(id)a0 inEventStore:(id)a1;
+ (id)parentAppBundleIdentifierForExtensionBundleIdentifier:(id)a0;
+ (void)renewConferenceURL:(id)a0 toDate:(id)a1;
+ (id)synchronousAppTitleOnlyForURL:(id)a0 incomplete:(BOOL *)a1;
+ (id)validURLForConferenceURL:(id)a0 completion:(id /* block */)a1;
+ (void)virtualConference:(id)a0 likelyCameFromRoomTypes:(id)a1 completionHandler:(id /* block */)a2;

@end
