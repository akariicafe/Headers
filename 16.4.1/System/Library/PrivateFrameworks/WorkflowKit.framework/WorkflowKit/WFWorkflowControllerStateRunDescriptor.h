@class WFWorkflowControllerState;

@interface WFWorkflowControllerStateRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) WFWorkflowControllerState *state;

- (id)initWithState:(id)a0;
- (void).cxx_destruct;

@end
