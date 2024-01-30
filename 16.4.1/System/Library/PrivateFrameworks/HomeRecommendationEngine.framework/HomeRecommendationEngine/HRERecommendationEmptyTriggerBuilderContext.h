@class NSString, NSSet, HFItem;

@interface HRERecommendationEmptyTriggerBuilderContext : NSObject <HFTriggerBuilderContextProviding>

@property (readonly, nonatomic) BOOL showTriggerSummary;
@property (readonly, nonatomic) BOOL showTriggerEnableSwitch;
@property (readonly, nonatomic) BOOL showTriggerDeleteButton;
@property (readonly, nonatomic) BOOL showActionSetsInstructions;
@property (readonly, nonatomic) BOOL showConditionTriggers;
@property (readonly, nonatomic) BOOL allowDurationEditing;
@property (readonly, nonatomic) BOOL allowConvertToShortcut;
@property (readonly, nonatomic) BOOL filtersEmptyActionSets;
@property (readonly, copy, nonatomic) NSString *testActionsInstructionDescription;
@property (readonly, copy, nonatomic) NSString *serviceActionsInstructionDescription;
@property (readonly, copy, nonatomic) NSString *actionEditorInstructionsDescription;
@property (readonly, copy, nonatomic) NSString *triggerContextAwareTitle;
@property (readonly, copy, nonatomic) NSString *deleteInstructionDescription;
@property (readonly, copy, nonatomic) NSString *deleteConfirmationAlertTitle;
@property (readonly, copy, nonatomic) NSString *deleteConfirmationAlertMessage;
@property (readonly, copy, nonatomic) NSString *doneButtonTitle;
@property (readonly, copy, nonatomic) NSSet *unsupportedTriggers;
@property (readonly, nonatomic) HFItem *suggestionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
