@class WFContextualAction;

@interface WFContextualActionRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFContextualAction *action;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
