@interface STAdminPersistenceController : STPersistenceController

@property (class, readonly, nonatomic) STAdminPersistenceController *sharedController;

- (id)init;
- (id)newBackgroundContext;

@end
