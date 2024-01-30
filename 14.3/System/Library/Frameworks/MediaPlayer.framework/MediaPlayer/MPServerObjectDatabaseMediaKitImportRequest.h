@interface MPServerObjectDatabaseMediaKitImportRequest : MPServerObjectDatabaseMetadataImportRequest

+ (id)_relationshipKeyForObject:(id)a0;
+ (id)_childKeyForParentType:(id)a0 type:(id)a1;
+ (id)_unsupportedMediaKitTypes;
+ (id)_unsupportedParentChildRelationships;

- (id)initWithPayload:(id)a0;
- (BOOL)performWithDatabaseOperations:(id)a0 augmentingPayload:(id *)a1 error:(id *)a2;

@end
