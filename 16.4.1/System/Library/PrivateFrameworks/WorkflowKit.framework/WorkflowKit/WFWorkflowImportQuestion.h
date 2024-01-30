@class WFParameter, NSString, WFAction;
@protocol WFParameterState;

@interface WFWorkflowImportQuestion : NSObject

@property (readonly, weak, nonatomic) WFAction *action;
@property (readonly, weak, nonatomic) WFParameter *parameter;
@property (readonly, copy, nonatomic) NSString *question;
@property (readonly, nonatomic) id<WFParameterState> defaultState;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0 parameter:(id)a1 question:(id)a2 defaultState:(id)a3;
- (id)initWithSerializedRepresentation:(id)a0 workflowActions:(id)a1;
- (id)serializedRepresentationWithWorkflowActions:(id)a0;

@end
