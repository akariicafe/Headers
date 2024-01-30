@class NSDictionary, NSSQLModel;

@interface NSSQLGenerateObjectIDRequestContext : NSSQLStoreRequestContext {
    NSDictionary *_entitiesAndCounts;
    NSSQLModel *_model;
}

- (BOOL)executeRequestCore:(id *)a0;
- (BOOL)isWritingRequest;
- (void)dealloc;
- (id)initForEntitiesAndCounts:(id)a0 context:(id)a1 sqlCore:(id)a2;

@end
