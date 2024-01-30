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
- (id)allAppBundleIdentifiers;
- (void)applicationsDidInstall:(id)a0;
- (id)_refreshAppLibrary;
- (id)testAppProxies;
- (id)subscribedAppProxies;
- (void)endIgnoringAppLibraryChanges;
- (id)subscribedAppBundleIdentifiers;
- (void)_subscriptionsDidChangeNotification:(id)a0;
- (BOOL)isTVAppInstalled;
- (id)dictionaryRepresentation;
- (id)_nonConformingAppProxies;
- (id)installedAppProxies;
- (id)_subscriptionInfosForProxies:(id)a0;
- (void)dealloc;
- (id)allAppProxies;
- (id)localizedNameForBundle:(id)a0;
- (void)beginIgnoringAppLibraryChanges;
- (void)_handleInvalidationWithReason:(id)a0;
- (id)_bundleIdentifiersfromProxies:(id)a0;
- (id)installedAppBundleIdentifiers;
- (id)testAppBundleIdentifiers;
- (id)init;
- (id)subscriptionInfoForBundle:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (id)_nonConformingAppBundleIdentifiers;
- (void).cxx_destruct;

@end
