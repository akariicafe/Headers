@class NSDictionary, NSSQLModel;

@interface NSSQLGenerateObjectIDRequestContext : NSSQLStoreRequestContext

@property (readonly, nonatomic) NSDictionary *entitiesAndCounts;
@property (readonly, nonatomic) NSSQLModel *model;

- (void)dealloc;
- (BOOL)executeRequestCore:(id *)a0;
- (id)initForEntitiesAndCounts:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)isWritingRequest;

@end
