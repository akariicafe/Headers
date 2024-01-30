@class WFSiriWorkflowRunnerClientOptions;

@interface WFSiriWorkflowRunRequest : WFWorkflowRunRequest

@property (retain, nonatomic) WFSiriWorkflowRunnerClientOptions *options;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;

@end
