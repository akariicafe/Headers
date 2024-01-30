@class STActivityAttributionCatalog, NSDictionary, NSString;

@interface STActivityAttributionCatalogDiff : NSObject <STStatusDomainDataDiff, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STActivityAttributionCatalog *attributionsAdded;
@property (readonly, copy, nonatomic) STActivityAttributionCatalog *attributionsRemoved;
@property (readonly, copy, nonatomic) NSDictionary *attributionsCleared;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromCatalog:(id)a0 toCatalog:(id)a1;

- (id)initWithAttributionsAdded:(id)a0 attributionsRemoved:(id)a1 attributionsCleared:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)catalogByApplyingToCatalog:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)applyToMutableCatalog:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
