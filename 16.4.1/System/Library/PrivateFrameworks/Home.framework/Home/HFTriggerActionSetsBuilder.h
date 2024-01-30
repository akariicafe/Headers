@class HMHome, NSString, NSArray, WFHomeWorkflow, HFTriggerAnonymousActionSetBuilder, HMShortcutAction, HFSetDiff, HFMutableSetDiff;

@interface HFTriggerActionSetsBuilder : NSObject <HFComparable, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)actionSetsSummary;
- (void)convertToHomeWorkflowActionSet:(id)a0;
- (void)addActionSetBuilder:(id)a0;
- (void)addActionSetIfNotPresent:(id)a0;
- (void)addAnonymousActionBuilder:(id)a0;
- (void)convertToHomeWorkflowActionSetIfNeeded;
- (void)defaultActionsForShortcut;
- (id)initWithActionSets:(id)a0 inHome:(id)a1 filterEmptyActionSets:(BOOL)a2;
- (void)removeActionSetIfPresent:(id)a0;
- (void)removeAnonymousActionBuilder:(id)a0;
- (void)updateAnonymousActionBuilder:(id)a0;
- (void)updateFromTriggerActionSetsBuilder:(id)a0;
- (id)initWithActionSets:(id)a0 inHome:(id)a1;
- (id)_uniqueServiceGroupForServices:(id)a0;
- (void)_generateStandaloneServices:(id)a0 andMediaAccessories:(id)a1;
- (id)_generateSummaryInformation;
- (id)_generateSummaryInformationForShortcutOwnedTrigger;
- (id)_generateSummaryInformationForStandardTrigger;
- (void)_removeAllNamedActionsSets;
- (id)_removeDuplicateActionSets:(id)a0;
- (id)_removeEmptyActionSets:(id)a0;
- (id)compareToObject:(id)a0;
- (id)createActionSetsForShortcuts;
- (id)mediaAccessoriesForPlaybackAction:(id)a0;
- (void)removeActionSetBuilder:(id)a0;
- (void)removeAllActionsAndActionSets;
- (void)resetActionSetBuilders;
- (void)resetAllActionSets;
- (void)setFromTriggerActionSetsBuilder:(id)a0;
- (void)updateActionSetBuilder:(id)a0;
- (void)updateActionSetsInTriggerBuilder:(id)a0;

@end
