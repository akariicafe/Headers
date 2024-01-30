@class NSSet;

@interface HKOAuth2ScopeSet : NSObject

@property (readonly, copy, nonatomic) NSSet *originalScopes;
@property (readonly, copy, nonatomic) NSSet *readableResourceTypes;
@property (readonly, copy, nonatomic) NSSet *writableResourceTypes;
@property (readonly, nonatomic) BOOL canReadAllResourceTypes;
@property (readonly, nonatomic) BOOL canWriteAllResourceTypes;
@property (readonly, nonatomic) BOOL hasAtLeastOneResourceTypeScope;
@property (readonly, nonatomic) BOOL hasClinicalSharingScopes;

+ (id)scopeSetWithScopeString:(id)a0;
+ (unsigned long long)_nonWildcardReadCompare:(id)a0 to:(id)a1;
+ (unsigned long long)_nonWildcardWriteCompare:(id)a0 to:(id)a1;
+ (unsigned long long)_readCompare:(id)a0 to:(id)a1;
+ (unsigned long long)_writeCompare:(id)a0 to:(id)a1;
+ (unsigned long long)compare:(id)a0 to:(id)a1;
+ (id)scopeSetWithScopes:(id)a0;
+ (id)scopesFromScopeString:(id)a0;

- (unsigned long long)compareTo:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)canReadResourceType:(id)a0;
- (BOOL)canWriteResourceType:(id)a0;
- (id)initWithOriginalScopes:(id)a0 readableResourceTypes:(id)a1 writableResourceTypes:(id)a2 canReadAllResourceTypes:(BOOL)a3 canWriteAllResourceTypes:(BOOL)a4 hasAtLeastOneResourceTypeScope:(BOOL)a5;
- (BOOL)isMissingScopesFrom:(id)a0;

@end
