@class NSSet;

@interface HKOAuthScopeSet : NSObject

@property (readonly, copy, nonatomic) NSSet *originalScopes;
@property (readonly, copy, nonatomic) NSSet *readableResourceTypes;
@property (readonly, copy, nonatomic) NSSet *writableResourceTypes;
@property (readonly, nonatomic) BOOL canReadAllResourceTypes;
@property (readonly, nonatomic) BOOL canWriteAllResourceTypes;
@property (readonly, nonatomic) BOOL hasAtLeastOneResourceTypeScope;
@property (readonly, nonatomic) BOOL hasClinicalSharingScopes;

+ (id)scopeSetWithScopes:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOriginalScopes:(id)a0 readableResourceTypes:(id)a1 writableResourceTypes:(id)a2 canReadAllResourceTypes:(BOOL)a3 canWriteAllResourceTypes:(BOOL)a4 hasAtLeastOneResourceTypeScope:(BOOL)a5;
- (BOOL)canReadResourceType:(id)a0;
- (BOOL)canWriteResourceType:(id)a0;

@end
