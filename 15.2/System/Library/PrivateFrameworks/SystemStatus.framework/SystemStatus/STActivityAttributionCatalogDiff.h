@class NSDictionary, NSString;

@interface STActivityAttributionCatalogDiff : NSObject <STStatusDomainDataDiff, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *attributionListDiffsByKey;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromCatalog:(id)a0 toCatalog:(id)a1;

- (id)diffByApplyingDiff:(id)a0;
- (void)applyToMutableCatalog:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)catalogByApplyingToCatalog:(id)a0;
- (id)initWithAttributionListDiffsByKey:(id)a0;

@end
