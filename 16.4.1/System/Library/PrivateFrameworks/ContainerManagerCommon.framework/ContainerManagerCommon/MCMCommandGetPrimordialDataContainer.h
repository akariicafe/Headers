@interface MCMCommandGetPrimordialDataContainer : MCMCommand <MCMParametersGetPrimordialDataContainer>

@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) BOOL useCodeSignDatabase;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;

@end
