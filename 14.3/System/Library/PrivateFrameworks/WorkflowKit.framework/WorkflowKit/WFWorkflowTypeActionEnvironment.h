@class NSString;

@interface WFWorkflowTypeActionEnvironment : WFActionEnvironment

@property (readonly, nonatomic) NSString *workflowType;

- (BOOL)isAppExtension;
- (void).cxx_destruct;
- (id)initWithWorkflowType:(id)a0;
- (BOOL)isWatchOS;

@end
