@class NSHashTable, NSString, NSArray, NSURL, UIImage, AMSLookupItem, SKStoreProductViewController, SSSoftwareLibraryItem, NSNumber;
@protocol PKCancelable;

@interface PKLinkedApplication : NSObject <SKStoreProductViewControllerDelegate> {
    SSSoftwareLibraryItem *_foundLibraryItem;
    AMSLookupItem *_foundStoreItem;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingLock;
    id<PKCancelable> _pendingUpdate;
    BOOL _loaded;
    BOOL _loading;
    NSHashTable *_observers;
    SKStoreProductViewController *_presentedViewController;
}

@property (copy, nonatomic) NSArray *storeIDs;
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

- (id)init;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_notifyObserversOfStateChange;
- (void)_updateApplicationStateWithCompletion:(id /* block */)a0;
- (void)_reloadApplicationState;
- (void)openApplication:(id)a0 withLaunchOptions:(unsigned long long)a1;
- (void)openApplication:(id)a0 withLaunchOptions:(unsigned long long)a1 launchURL:(id)a2;
- (id)_iconImageDescriptorForScale:(double)a0;
- (void)_unloadApplicationState;
- (BOOL)_useLibraryItem;
- (void)openApplication:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (id)initWithStoreIDs:(id)a0 defaultLaunchURL:(id)a1;
- (void)reloadApplicationStateIfNecessary;
- (id)initWithPass:(id)a0;
- (void)installedApplicationsDidChangeNotification:(id)a0;

@end
