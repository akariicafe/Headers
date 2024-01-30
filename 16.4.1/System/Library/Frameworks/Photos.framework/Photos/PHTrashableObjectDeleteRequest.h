@interface PHTrashableObjectDeleteRequest : PHObjectDeleteRequest

@property (readonly, nonatomic) long long operation;
@property (readonly, nonatomic, getter=isClientEntitledToExpunge) BOOL clientEntitledToExpunge;

+ (id)deleteRequestForObject:(id)a0;
+ (id)deleteRequestForObject:(id)a0 operation:(long long)a1;

- (void)encodeToXPCDict:(id)a0;
- (id)initWithUUID:(id)a0 objectID:(id)a1 operation:(long long)a2;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)validateForDeleteManagedObject:(id)a0 error:(id *)a1;

@end
