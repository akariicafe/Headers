@interface PHLibraryScopeDeleteRequest : PHObjectDeleteRequest

@property (nonatomic) long long operation;
@property (nonatomic) BOOL photosctlExpungeOverride;

- (void)deleteManagedObject:(id)a0 photoLibrary:(id)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)validateForDeleteManagedObject:(id)a0 error:(id *)a1;

@end
