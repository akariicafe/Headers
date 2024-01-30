@class NSSet, WFWorkflowControllerState;

@interface WFWorkflowControllerStateRunDescriptor : WFWorkflowRunDescriptor <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFWorkflowControllerState *state;
@property (readonly, nonatomic) NSSet *extensionResourceClasses;

- (id)initWithState:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0 extensionResourceClasses:(id)a1;

@end
