@class NSMutableArray, NSDate;

@interface PKCatalog : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSMutableArray *groups;

+ (id)catalogWithContentsOfURL:(id)a0 nonUbiquitousCatalogURL:(id)a1 directoryCoordinator:(id)a2;
+ (id)catalogWithLocalCatalog:(id)a0 ubiquitousCatalog:(id)a1;
+ (id)recordNamePrefix;
+ (id)catalogWithContentsOfURL:(id)a0 nonUbiquitousCatalogURL:(id)a1;

- (unsigned long long)itemType;
- (void)encodeWithCoder:(id)a0;
- (id)primaryIdentifier;
- (void)shuffle:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)allGroupIDs;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0 codingType:(unsigned long long)a1;
- (id)initWithCloudStoreCoder:(id)a0;
- (BOOL)isEquivalentToCatalog:(id)a0;
- (BOOL)isNewerThanCatalog:(id)a0;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)a0;
- (void)writeToURL:(id)a0 nonUbiquitousCatalogURL:(id)a1 atomically:(BOOL)a2;

@end
