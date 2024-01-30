@class PHFetchResult, PHFetchOptions, NSString, NSDictionary, PHAssetCollection, NSArray;

@interface OKMediaFeederPhotoKit : OKMediaFeeder <PHPhotoLibraryChangeObserver> {
    unsigned long long _type;
    NSString *_collectionIdentifier;
    NSDictionary *_predicate;
    NSArray *_sortDescriptors;
}

@property (retain) PHFetchResult *fetchResult;
@property (retain) PHAssetCollection *assetCollection;
@property (retain) PHFetchOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRemote;
+ (id)supportedSettings;
+ (id)mediaFeederWithAssetCollection:(id)a0 andOptions:(id)a1;
+ (id)mediaFeederWithFetchResult:(id)a0;
+ (BOOL)supportLiveUpdates;
+ (id)mediaFeederWithAllAssetsWithOptions:(id)a0;

- (id)initWithSettings:(id)a0;
- (void)photoLibraryDidChange:(id)a0;
- (id)init;
- (id)photoLibrary;
- (void)dealloc;
- (id)initWithFetchResult:(id)a0;
- (id)feederSettings;
- (BOOL)canBePersisted;
- (id)reloadMediaObjectsWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)numberOfMediaObjects;
- (id)mediaObjectsAtIndexes:(id)a0;
- (id)mediaObjectURLsAtIndexes:(id)a0;
- (id)indexesForMediaObjects:(id)a0;
- (id)initWithAssetCollection:(id)a0 andOptions:(id)a1;
- (id)initWithAllAssetsWithOptions:(id)a0;

@end
