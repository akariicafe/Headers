@class NSString, NSArray, NSDictionary, TPSAssetSizes;

@interface TPSContentPackage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSArray *orderedCollectionIdentifiers;
@property (retain, nonatomic) NSDictionary *collectionMap;
@property (retain, nonatomic) NSDictionary *tipMap;
@property (retain, nonatomic) TPSAssetSizes *assetSizes;
@property (readonly, nonatomic) NSArray *orderedCollections;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
