@class MCMUserIdentity, MCMManagedPath;

@interface MCMManagedUserPathRegistry : MCMManagedPathRegistry

@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) MCMManagedPath *userHome;
@property (readonly, nonatomic) MCMManagedPath *userLibrary;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserLibrary;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserPendingUpdates;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserReplaceOperations;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserDeleteOperations;

- (void)_initPathPropertiesWithUserHomeDirectoryURL:(id)a0 clientUser:(id)a1;
- (id)initWithUserIdentity:(id)a0 daemonUser:(id)a1;
- (void).cxx_destruct;

@end
