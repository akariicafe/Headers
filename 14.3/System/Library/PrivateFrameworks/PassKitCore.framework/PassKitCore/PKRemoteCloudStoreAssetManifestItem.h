@class NSString;

@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *recordName;

- (unsigned long long)itemType;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)a0 completion:(id /* block */)a1;

@end
