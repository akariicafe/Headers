@interface MCMCommandInvalidateCodeSigningCache : MCMCommand

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (BOOL)preflightClientAllowed;

@end
