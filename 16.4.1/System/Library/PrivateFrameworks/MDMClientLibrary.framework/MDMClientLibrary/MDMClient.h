@interface MDMClient : MDMClientCore

+ (id)sharedClient;

- (BOOL)isManagedByMDM;
- (id)init;

@end
