@class NSData;

@interface WFWorkflowDataRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, copy, nonatomic) NSData *workflowData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithWorkflowData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
