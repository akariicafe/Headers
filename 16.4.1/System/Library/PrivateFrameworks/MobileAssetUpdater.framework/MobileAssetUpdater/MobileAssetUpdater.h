@class NSString, MAAsset, MAAssetQuery, NSURL, NSMutableArray, NSLock;

@interface MobileAssetUpdater : NSObject {
    BOOL _participateInSeed;
    NSLock *_lock;
}

@property (retain) MAAsset *asset;
@property (retain) MAAssetQuery *query;
@property (copy) NSString *assetType;
@property (copy, nonatomic) NSMutableArray *alternateAssetTypes;
@property (retain) NSString *overrideFile;
@property (retain) NSString *purgeOverrideFile;
@property (readonly) BOOL assetAvailable;
@property (readonly) BOOL assetDownloaded;
@property (readonly) BOOL overrideApplied;
@property BOOL requireAssetMetadata;
@property (copy) id /* block */ logger;
@property BOOL downloadOnCellularAllowed;
@property (retain) NSURL *assetLocation;
@property (retain) NSURL *assetLocationOverride;

- (void)dealloc;
- (id)initWithAssetType:(id)a0;
- (id)queryPredicate;
- (BOOL)isDeploymentAllowed:(id)a0;
- (void)log:(int)a0 format:(id)a1;
- (id)overrideQueryPredicateFromDict:(id)a0;
- (id)assetWithMaxVersion:(id)a0;
- (void)doneWithAsset;
- (id)downloadAsset:(id /* block */)a0;
- (void)downloadComplete:(long long)a0 completion:(id /* block */)a1;
- (BOOL)filterAsset:(id)a0 osBuild:(id)a1 osVersion:(id)a2;
- (id)filterFoundAssets:(id)a0;
- (id)findAsset:(BOOL)a0 completion:(id /* block */)a1;
- (void)purgeAsset;
- (void)queryComplete:(id)a0 remote:(BOOL)a1 status:(long long)a2 completion:(id /* block */)a3;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)a0;

@end
