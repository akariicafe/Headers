@class SPUICommandEnvironment;

@interface SPUICommandExecutor : NSObject

@property (retain, nonatomic) SPUICommandEnvironment *commandEnvironment;

+ (id)commandExecutorForCommand:(id)a0 environment:(id)a1;

- (void).cxx_destruct;
- (BOOL)canPerformCommand;
- (id)initWithCommand:(id)a0 environment:(id)a1;

@end
