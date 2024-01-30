@class WFContextualAction, WFContextualActionContext;

@interface WFContextualActionRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFContextualAction *action;
@property (readonly, nonatomic) WFContextualActionContext *context;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0 context:(id)a1;

@end
