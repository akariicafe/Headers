@class NSString, NSData;

@interface MAAutoAssetSelector : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *assetSpecifier;
@property (readonly, nonatomic) NSData *downloadDecryptionKey;

- (void)encodeWithCoder:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)persistedEntryID;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (id)summary;
- (void)assignAssetVersion:(id)a0;
- (id)newSummaryDictionary;
- (id)copyClearingWriteOnlyFields;
- (BOOL)isEqual:(id)a0;
- (id)copy;
- (id)initForAssetType:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2;
- (id)description;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2 usingDecryptionKey:(id)a3;
- (void).cxx_destruct;

@end
