@class NSString, NSArray, WFWorkflow;

@interface WFWorkflowPickerParameter : WFEnumerationParameter <WFWorkflowReferencing> {
    NSArray *_possibleStates;
}

@property (weak, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)possibleStates;
- (void).cxx_destruct;
- (Class)singleStateClass;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryImageForPossibleState:(id)a0;
- (id)workflowForState:(id)a0;

@end
