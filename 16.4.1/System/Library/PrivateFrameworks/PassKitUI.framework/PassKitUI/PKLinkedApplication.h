@class NSHashTable, NSString, AMSLookupItem, NSArray, NSURL, UIImage, SKStoreProductViewController, NSMutableArray, SSSoftwareLibraryItem, LSApplicationRecord, NSNumber, NSObject;
@protocol OS_dispatch_queue, PKCancelable;

@interface PKLinkedApplication : NSObject <SKStoreProductViewControllerDelegate> {
    AMSLookupItem *_foundStoreItem;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingLock;
    id<PKCancelable> _pendingUpdate;
    BOOL _loaded;
    BOOL _loading;
    NSHashTable *_observers;
    NSMutableArray *_completionHandlers;
    SKStoreProductViewController *_presentedViewController;
    SSSoftwareLibraryItem *_foundLibraryItem;
    LSApplicationRecord *_foundSystemAppRecord;
    NSObject<OS_dispatch_queue> *_appLookupQueue;
}

@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) NSArray *systemAppBundleIdentifiers;
@property (copy, nonatomic) NSArray *applicationIdentifiers;
@property (copy, nonatomic) NSURL *defaultLaunchURL;
@property (copy, nonatomic) NSString *customProductPageIdentifier;
@property (nonatomic) BOOL useSmallIcon;
@property (nonatomic) BOOL shouldApplyMask;
@property (nonatomic) BOOL shouldApplyBorder;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isInstalled) BOOL installed;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedIconSize;
@property (readonly, nonatomic) UIImage *iconImage;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *publisher;
@property (readonly, nonatomic) NSNumber *averageRating;
@property (readonly, nonatomic) NSString *price;
@property (readonly, nonatomic) NSNumber *storeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_openOptionsWithURL:(id)a0;

- (void)addObserver:(id)a0;
- (void)productViewControllerDidFinish:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPass:(id)a0;
- (BOOL)_useLibraryItem;
- (id)_iconImageDescriptorForScale:(double)a0;
- (void)_notifyObserversOfStateChange;
- (void)_reloadApplicationStateWithCompletion:(id /* block */)a0;
- (void)_unloadApplicationState;
- (void)_updateApplicationStateWithCompletion:(id /* block */)a0;
- (id)initWithApplicationIdentifiers:(id)a0 storeIDs:(id)a1 defaultLaunchURL:(id)a2;
- (id)initWithStoreIDs:(id)a0 defaultLaunchURL:(id)a1;
- (id)initWithStoreIDs:(id)a0 systemAppBundleIdentifiers:(id)a1 defaultLaunchURL:(id)a2;
- (id)initWithStoreIDs:(id)a0 systemAppBundleIdentifiers:(id)a1 defaultLaunchURL:(id)a2 applicationIdentifiers:(id)a3;
- (void)installedApplicationsDidChangeNotification:(id)a0;
- (void)openApplication:(id)a0;
- (void)openApplication:(id)a0 withLaunchOptions:(unsigned long long)a1;
- (void)openApplication:(id)a0 withLaunchOptions:(unsigned long long)a1 launchURL:(id)a2;
- (void)reloadApplicationStateIfNecessary;
- (void)reloadApplicationStateIfNecessaryWithCompletion:(id /* block */)a0;

@end
