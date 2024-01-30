@class HFTriggerAnonymousActionSetBuilder, HMShortcutAction, NSArray, HFMutableSetDiff, HFSetDiff, WFHomeWorkflow, HMHome;

@interface HFTriggerActionSetsBuilder : NSObject

@property (retain, nonatomic) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder;
@property (retain, nonatomic) HFMutableSetDiff *actionSetBuilders;
@property (retain, nonatomic) HMShortcutAction *shortcutAction;
@property (readonly, nonatomic) NSArray *allActionSets;
@property (readonly, nonatomic) NSArray *allActionBuilders;
@property (readonly, nonatomic) NSArray *namedActionSets;
@property (readonly, nonatomic) NSArray *anonymousActionBuilder;
@property (readonly, nonatomic) HFSetDiff *namedActionSetsDiff;
@property (readonly, nonatomic) BOOL hasActions;
@property (readonly, nonatomic, getter=areActionsAffectedByEndEvents) BOOL actionsAffectedByEndEvents;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) BOOL isShortcutOwned;
@property (retain, nonatomic) WFHomeWorkflow *homeWorkflow;

- (void).cxx_destruct;
- (id)mediaAccessoriesForPlaybackAction:(id)a0;
- (id)actionSetsSummary;
- (id)initWithActionSets:(id)a0 inHome:(id)a1 filterEmptyActionSets:(BOOL)a2;
- (id)_removeDuplicateActionSets:(id)a0;
- (id)_removeEmptyActionSets:(id)a0;
- (void)removeActionSetBuilder:(id)a0;
- (void)addActionSetBuilder:(id)a0;
- (void)convertToHomeWorkflowActionSetIfNeeded;
- (void)_removeAllNamedActionsSets;
- (id)initWithActionSets:(id)a0 inHome:(id)a1;
- (void)updateFromTriggerActionSetsBuilder:(id)a0;
- (void)updateActionSetBuilder:(id)a0;
- (void)addAnonymousActionBuilder:(id)a0;
- (void)updateAnonymousActionBuilder:(id)a0;
- (void)removeAnonymousActionBuilder:(id)a0;
- (void)removeAllActionsAndActionSets;
- (id)_generateSummaryInformation;
- (id)_generateSummaryInformationForShortcutOwnedTrigger;
- (id)_generateSummaryInformationForStandardTrigger;
- (void)_generateStandaloneServices:(id)a0 andMediaAccessories:(id)a1;
- (id)_uniqueServiceGroupForServices:(id)a0;
- (void)resetAllActionSets;
- (void)resetActionSetBuilders;
- (void)addActionSetIfNotPresent:(id)a0;
- (void)removeActionSetIfPresent:(id)a0;
- (void)convertToHomeWorkflowActionSet:(id)a0;
- (void)defaultActionsForShortcut;

@end
