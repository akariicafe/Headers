@interface MCMCommandDataMigration : MCMCommand

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;
- (BOOL)_performBundleContainerOwnershipMigrationWithError:(id *)a0;
- (BOOL)_performInternalACLMigrationWithError:(id *)a0;

@end
