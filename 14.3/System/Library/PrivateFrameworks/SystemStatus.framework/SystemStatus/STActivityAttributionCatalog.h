@class NSArray, NSMutableDictionary, NSString;

@interface STActivityAttributionCatalog : NSObject <STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSMutableDictionary *attributionsByKey;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, copy, nonatomic) NSArray *allKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataByApplyingDiff:(id)a0;
- (void)enumerateAttributionsUsingBlock:(id /* block */)a0;
- (id)init;
- (id)diffFromData:(id)a0;
- (id)initWithCatalog:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAttributionsByKey:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)attributionsForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
