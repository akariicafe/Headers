@class NSString, NSDictionary, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppLibrary : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSDictionary *_appProxies;
    NSArray *_allAppBundleIdentifiers;
    NSArray *_installedAppBundleIdentifiers;
    NSArray *_subscribedAppBundleIdentifiers;
    NSArray *_testAppBundleIdentifiers;
    NSArray *_nonConformingAppBundleIdentifiers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_refreshQueue;
    BOOL _appLibraryNeedsRefresh;
    long long _ignoreAppLibraryChangesCount;
    int _didChangeNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAppLibrary;

- (id)refresh;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)localizedNameForBundle:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (id)allAppBundleIdentifiers;
- (void)beginIgnoringAppLibraryChanges;
- (void)endIgnoringAppLibraryChanges;
- (id)subscribedAppBundleIdentifiers;
- (id)subscriptionInfoForBundle:(id)a0;
- (BOOL)isTVAppInstalled;
- (id)_refreshAppLibrary;
- (void)_subscriptionsDidChangeNotification:(id)a0;
- (void)_handleInvalidationWithReason:(id)a0;
- (id)installedAppBundleIdentifiers;
- (id)_subscriptionInfosForProxies:(id)a0;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (id)testAppBundleIdentifiers;
- (id)installedAppProxies;
- (id)subscribedAppProxies;
- (id)testAppProxies;
- (id)allAppProxies;
- (id)_nonConformingAppBundleIdentifiers;
- (id)_nonConformingAppProxies;

@end
