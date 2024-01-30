@class NSMutableArray, NSDate;

@interface PKCatalog : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSMutableArray *groups;

+ (id)catalogWithLocalCatalog:(id)a0 ubiquitousCatalog:(id)a1;
+ (id)catalogWithContentsOfURL:(id)a0 nonUbiquitousCatalogURL:(id)a1 directoryCoordinator:(id)a2;
+ (id)catalogWithContentsOfURL:(id)a0 nonUbiquitousCatalogURL:(id)a1;
+ (id)recordNamePrefix;

- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeToURL:(id)a0 nonUbiquitousCatalogURL:(id)a1 atomically:(BOOL)a2;
- (BOOL)isEquivalentToCatalog:(id)a0;
- (BOOL)isNewerThanCatalog:(id)a0;
- (id)allGroupIDs;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)description;
- (unsigned long long)itemType;
- (void).cxx_destruct;
- (id)primaryIdentifier;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)shuffle:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCloudStoreCoder:(id)a0;

@end
