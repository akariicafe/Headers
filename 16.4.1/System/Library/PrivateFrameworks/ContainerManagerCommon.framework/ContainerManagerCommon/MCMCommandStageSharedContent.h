@class NSString;

@interface MCMCommandStageSharedContent : MCMCommand <MCMParametersStageSharedContent>

@property (readonly, nonatomic) NSString *sourceRelativePath;
@property (readonly, nonatomic) NSString *destinationRelativePath;
@property (readonly, nonatomic) NSString *identifier;

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithMessage:(id)a0 context:(id)a1 reply:(id)a2;
- (BOOL)preflightClientAllowed;
- (void).cxx_destruct;

@end
