@interface MPServerObjectDatabaseMediaKitImportRequest : MPServerObjectDatabaseMetadataImportRequest

+ (id)_unsupportedParentChildRelationships;
+ (id)_unsupportedMediaKitTypes;
+ (id)_relationshipKeyForObject:(id)a0;
+ (id)_childKeyForParentType:(id)a0 type:(id)a1;

- (id)performWithDatabaseOperations:(id)a0 augmentingPayload:(id *)a1 trustID:(id)a2;
- (long long)_sinfTypeFromPayload:(id)a0;
- (id)_sinfDataFromSinfType:(long long)a0 payload:(id)a1;
- (id)initWithPayload:(id)a0;

@end
