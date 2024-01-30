@interface PHMemoryDeleteRequest : PHObjectDeleteRequest

@property (readonly, nonatomic) BOOL clientEntitledToMemoryMutation;

- (void)deleteManagedObject:(id)a0 photoLibrary:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)validateForDeleteManagedObject:(id)a0 error:(id *)a1;

@end
