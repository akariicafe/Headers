@class TRIFullMAAssetId, NSString, MAAutoAssetSelector, MAAutoAsset;

@interface TRIMAAutoAsset : NSObject <TRIAutoAsset> {
    MAAutoAsset *_autoAsset;
}

@property (retain, nonatomic) TRIFullMAAssetId *assetId;
@property (retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)endLockUsageSync:(id)a0;
- (id)determineIfAvailableSync:(id)a0 withTimeout:(long long)a1 discoveredAttributes:(id *)a2 error:(id *)a3;
- (id)lockContentSync:(id)a0 withUsagePolicy:(id)a1 withTimeout:(long long)a2 lockedAssetSelector:(id *)a3 newerInProgress:(id *)a4 error:(id *)a5;
- (void).cxx_destruct;
- (void)lockContent:(id)a0 withUsagePolicy:(id)a1 withTimeout:(long long)a2 reportingProgress:(id /* block */)a3 completion:(id /* block */)a4;
- (void)lockContent:(id)a0 withUsagePolicy:(id)a1 withTimeout:(long long)a2 completion:(id /* block */)a3;
- (id)currentLocksSync:(id *)a0;
- (id)initWithAssetId:(id)a0 decryptionKey:(id)a1 error:(id *)a2;

@end
