@class NSMutableArray, NSDate;

@interface PKCatalog : NSObject <NSCopying, NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSMutableArray *groups;

+ (id)catalogWithContentsOfURL:(id)a0 nonUbiquitousCatalogURL:(id)a1 directoryCoordinator:(id)a2;
+ (id)recordNamePrefix;
+ (id)catalogWithLocalCatalog:(id)a0 ubiquitousCatalog:(id)a1;
+ (id)catalogWithContentsOfURL:(id)a0 nonUbiquitousCatalogURL:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)writeToURL:(id)a0 nonUbiquitousCatalogURL:(id)a1 atomically:(BOOL)a2;
- (BOOL)isEquivalentToCatalog:(id)a0;
- (void)shuffle:(int)a0;
- (BOOL)isNewerThanCatalog:(id)a0;
- (void)encodeWithCloudStoreCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)itemType;
- (id)description;
- (id)primaryIdentifier;
- (id)allGroupIDs;
- (void)encodeWithCoder:(id)a0;

@end
