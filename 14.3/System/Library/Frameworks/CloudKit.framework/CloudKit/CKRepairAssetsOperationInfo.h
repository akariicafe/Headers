@class CKUploadRequestConfiguration, NSArray;

@interface CKRepairAssetsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSArray *packages;
@property (retain, nonatomic) NSArray *assetMetadata;
@property (retain, nonatomic) NSArray *packageMetadata;
@property (retain, nonatomic) NSArray *unavailableAssets;
@property (retain, nonatomic) NSArray *unavailablePackages;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
