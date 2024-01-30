@interface PGOnDiskManager : PGManager

+ (Class)graphClass;

- (void)precachePersonsInformationWithProgressBlock:(id /* block */)a0;
- (void)closePersistentStore;
- (BOOL)requiresReadOnly;

@end
