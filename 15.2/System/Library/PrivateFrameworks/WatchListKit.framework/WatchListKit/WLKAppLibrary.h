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

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (id)localizedNameForBundle:(id)a0;
- (void)endIgnoringAppLibraryChanges;
- (id)installedAppBundleIdentifiers;
- (id)_nonConformingAppProxies;
- (id)allAppProxies;
- (id)subscribedAppProxies;
- (BOOL)isTVAppInstalled;
- (void)beginIgnoringAppLibraryChanges;
- (id)testAppProxies;
- (id)_nonConformingAppBundleIdentifiers;
- (void)_subscriptionsDidChangeNotification:(id)a0;
- (id)subscribedAppBundleIdentifiers;
- (id)testAppBundleIdentifiers;
- (id)subscriptionInfoForBundle:(id)a0;
- (id)allAppBundleIdentifiers;
- (id)_subscriptionInfosForProxies:(id)a0;
- (void).cxx_destruct;
- (id)_refreshAppLibrary;
- (id)init;
- (id)refresh;
- (void)_handleInvalidationWithReason:(id)a0;
- (id)installedAppProxies;
- (void)dealloc;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (id)dictionaryRepresentation;

@end
