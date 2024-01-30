@interface PGOnDiskManager : PGManager

+ (Class)graphClass;

- (BOOL)requiresReadOnly;
- (void)closePersistentStore;

@end
