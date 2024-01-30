@class NSArray;

@interface WFWorkflowContextualActionOutputRunResult : WFWorkflowRunResult

@property (readonly, nonatomic) NSArray *files;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFiles:(id)a0;
- (id)initWithFiles:(id)a0 runError:(id)a1;

@end
