@class NSHashTable, VEKReachability, NSRecursiveLock, PHAssetRepresentation, NSString, NSOperationQueue, NSMutableDictionary, NSMutableArray, NSMutableSet, NSMapTable;

@interface PHAssetRepresentationPersistenceManager : VEiOSSharedObject <PHPhotoLibraryChangeObserver, PHAssetRepresentationDownloadOperationDelegate>

@property (retain, nonatomic) NSOperationQueue *downloadQueue;
@property (retain, nonatomic) NSHashTable *universalPersistenceObservers;
@property (retain, nonatomic) NSMapTable *assetRepresentationToPersistenceObserverMap;
@property (retain, nonatomic) NSMapTable *localIdentifierToAssetRepresentationMap;
@property (nonatomic) BOOL bulkAssetRegistrationRequestCount;
@property (retain, nonatomic) NSMutableArray *pendingRegistrationLocalIDs;
@property (retain, nonatomic) NSMutableArray *fetchResults;
@property (retain, nonatomic) NSMutableSet *deletedLocalIdentifiers;
@property (retain, nonatomic) NSRecursiveLock *observerLock;
@property (retain, nonatomic) VEKReachability *hostReachability;
@property (retain, nonatomic) VEKReachability *wifiReachability;
@property (retain, nonatomic) VEKReachability *internetReachability;
@property (nonatomic, getter=isOnline) BOOL online;
@property (nonatomic) unsigned long long reachabilityStatus;
@property (retain, nonatomic) NSRecursiveLock *downloadsLock;
@property (retain, nonatomic) NSMutableSet *unreadDownloads;
@property (retain, nonatomic) NSMutableSet *recentDownloads;
@property (retain, nonatomic) NSMutableDictionary *recentDownloadsDict;
@property (retain, nonatomic) NSMutableDictionary *requestedDownloadsDict;
@property (retain, nonatomic) PHAssetRepresentation *pendingAssetRepresentation;
@property (nonatomic) unsigned long long cellularAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (void)clearStaticCache;
+ (void)purgeSharedInstance;

- (void)photoLibraryDidChange:(id)a0;
- (void)cancelAllDownloads;
- (void)reachabilityChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)dealloc;
- (void)loadRequestedDownloads;
- (void)issueRequestedDownloads;
- (void)loadRecentDownloads;
- (void)clearStaticCaches;
- (id)recentDownloadsPath;
- (void)saveRecentDownloads;
- (void)submitDownloadOperationForAssetRepresentation:(id)a0 userInitiated:(BOOL)a1;
- (id)requestedDownloadsPath;
- (void)saveRequestedDownloads;
- (void)updateOnlineStatus;
- (void)requestDownloadOfAssetRepresentation:(id)a0;
- (void)markAssetRepresentationAsRecent:(id)a0;
- (void)markAssetRepresentationAsRequested:(id)a0;
- (void)enumerateObserversOfAssetRepresentation:(id)a0 withBlock:(id /* block */)a1;
- (void)unmarkAssetRepresentationAsRecent:(id)a0;
- (void)unmarkAssetRepresentationAsRequested:(id)a0;
- (void)markAssetRepresentationAsUnread:(id)a0;
- (void)downloadOperationDidStart:(id)a0;
- (void)downloadOperationDidFinish:(id)a0;
- (void)downloadOperation:(id)a0 didProgess:(double)a1;
- (id)unreadDownloadedAssetRepresentations;
- (void)resetUnreadDownloads;
- (unsigned long long)numberOfUnreadDownloads;
- (void)requestDownloadOfAssetRepresentation:(id)a0 userInitiated:(BOOL)a1;
- (void)cancelDownloadOfAssetRepresentation:(id)a0;
- (void)registerAssetRepresentation:(id)a0;
- (void)setPersistenceState:(unsigned long long)a0 ofAssetRepresentation:(id)a1;
- (void)unregisterAssetRepresentation:(id)a0;
- (unsigned long long)numberOfRequestedDownloads;
- (void)beginBulkAssetRegistration;
- (void)endBulkAssetRegistration;
- (id)recentlyDownloadedAssetRepresentations;
- (void)unregisterObserver:(id)a0 forAssetRepresentation:(id)a1;
- (void)registerObserver:(id)a0 forAssetRepresentation:(id)a1;

@end
