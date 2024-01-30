@class NSString, NSSet, HFItem;

@interface HUTriggerBuilderContext : NSObject <HFTriggerBuilderContextProviding>

@property (nonatomic) BOOL showTriggerSummary;
@property (nonatomic) BOOL showTriggerEnableSwitch;
@property (nonatomic) BOOL showTriggerDeleteButton;
@property (nonatomic) BOOL showActionSetsInstructions;
@property (nonatomic) BOOL showConditionTriggers;
@property (nonatomic) BOOL allowDurationEditing;
@property (nonatomic) BOOL allowConvertToShortcut;
@property (nonatomic) BOOL filtersEmptyActionSets;
@property (copy, nonatomic) NSString *testActionsInstructionDescription;
@property (copy, nonatomic) NSString *serviceActionsInstructionDescription;
@property (copy, nonatomic) NSString *deleteInstructionDescription;
@property (copy, nonatomic) NSString *actionEditorInstructionsDescription;
@property (copy, nonatomic) NSString *triggerContextAwareTitle;
@property (copy, nonatomic) NSSet *unsupportedTriggers;
@property (retain, nonatomic) HFItem *suggestionItem;
@property (copy, nonatomic) NSString *doneButtonTitle;
@property (copy, nonatomic) NSString *deleteConfirmationAlertTitle;
@property (copy, nonatomic) NSString *deleteConfirmationAlertMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTriggerBuilderContext:(id)a0;

@end
