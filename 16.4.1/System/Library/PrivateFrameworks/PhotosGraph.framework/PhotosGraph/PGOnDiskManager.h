@interface PGOnDiskManager : PGManager

+ (Class)graphClass;

- (void)closePersistentStore;
- (BOOL)requiresReadOnly;

@end
