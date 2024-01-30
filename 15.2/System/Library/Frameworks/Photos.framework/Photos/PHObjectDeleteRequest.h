@class NSString, NSManagedObjectID;

@interface PHObjectDeleteRequest : PHChangeRequest <PHDeleteChangeRequest> {
    NSString *_uuid;
}

@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deleteRequestsForObjects:(id)a0 ofType:(Class)a1 forSelector:(SEL)a2;
+ (id)deleteRequestForObject:(id)a0;
+ (id)_deleteRequestsForObjects:(id)a0;

- (void)encodeToXPCDict:(id)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)uuid;
- (id)initForNewObject;
- (BOOL)validateForDeleteManagedObject:(id)a0 error:(id *)a1;
- (void)deleteManagedObject:(id)a0 photoLibrary:(id)a1;
- (id)initWithUUID:(id)a0 request:(id)a1 objectID:(id)a2;

@end
