@class NSRecursiveLock, NSSet, NSMutableDictionary, PHFetchResult, NSString, PHAssetCollection;

@interface MBLibraryClipsLoader : MBClipsLoader <PHPhotoLibraryChangeObserver>

@property (retain) NSMutableDictionary *identifierURLsToClipsMap;
@property (retain) NSSet *insertedAssetURLs;
@property (retain) NSSet *assetURLs;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (retain, nonatomic) NSRecursiveLock *updateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)photoLibraryDidChange:(id)a0;
- (id)clips;
- (void).cxx_destruct;
- (void)load;
- (void)dealloc;
- (long long)countForAllClips;
- (id)fetchAssets;
- (id)initWithAssetCollection:(id)a0 showOnlyFavorites:(BOOL)a1;
- (void)addClipWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchAssetURLs;
- (void)loadClipsFromURLs:(id)a0;

@end
