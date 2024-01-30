@class NSString;

@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *recordName;

- (unsigned long long)itemType;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)a0 completion:(id /* block */)a1;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)a0 tryCount:(unsigned long long)a1 completion:(id /* block */)a2;

@end
