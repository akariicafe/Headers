@class NSHashTable, NSString, AMSLookupItem, NSArray, NSURL, UIImage, SKStoreProductViewController, NSMutableArray, SSSoftwareLibraryItem, LSApplicationRecord, NSNumber;
@protocol PKCancelable;

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
}

@property (copy, nonatomic) NSArray *storeIDs;
@property (copy, nonatomic) NSArray *systemAppBundleIdentifiers;
@property (copy, nonatomic) NSURL *defaultLaunchURL;
@property (nonatomic) BOOL useSmallIcon;
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

- (void)productViewControllerDidFinish:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)initWithPass:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithStoreIDs:(id)a0 defaultLaunchURL:(id)a1;
- (void)reloadApplicationStateIfNecessary;
- (id)initWithStoreIDs:(id)a0 systemAppBundleIdentifiers:(id)a1 defaultLaunchURL:(id)a2;
- (void)installedApplicationsDidChangeNotification:(id)a0;
- (void)_notifyObserversOfStateChange;
- (void)_updateApplicationStateWithCompletion:(id /* block */)a0;
- (void)reloadApplicationStateIfNecessaryWithCompletion:(id /* block */)a0;
- (void)_reloadApplicationStateWithCompletion:(id /* block */)a0;
- (void)openApplication:(id)a0 withLaunchOptions:(unsigned long long)a1;
- (void)openApplication:(id)a0 withLaunchOptions:(unsigned long long)a1 launchURL:(id)a2;
- (id)_iconImageDescriptorForScale:(double)a0;
- (void)_unloadApplicationState;
- (BOOL)_useLibraryItem;
- (void)openApplication:(id)a0;

@end
