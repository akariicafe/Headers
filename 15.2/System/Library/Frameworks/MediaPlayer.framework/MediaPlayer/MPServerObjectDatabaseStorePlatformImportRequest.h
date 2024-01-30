@interface MPServerObjectDatabaseStorePlatformImportRequest : MPServerObjectDatabaseMetadataImportRequest

+ (id)_unsupportedParentChildRelationships;
+ (id)_relationshipKeyForObject:(id)a0;
+ (id)_unsupportedStorePlatformKinds;
+ (id)_childKeyForParentType:(id)a0 type:(id)a1;

- (id)performWithDatabaseOperations:(id)a0 augmentingPayload:(id *)a1 trustID:(id)a2;
- (id)initWithPayload:(id)a0;

@end
