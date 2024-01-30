@class HFDurationEventBuilder, HFTriggerActionSetsBuilder, NSString, HFMutableSetDiff, NSArray, HFConditionCollection, HMTrigger;
@protocol HFTriggerBuilderContextProviding;

@interface HFTriggerBuilder : HFItemBuilder

@property (retain, nonatomic) HFTriggerActionSetsBuilder *triggerActionSets;
@property (retain, nonatomic) HFMutableSetDiff *endEventBuildersDiff;
@property (retain, nonatomic) id<HFTriggerBuilderContextProviding> context;
@property (retain, nonatomic) HFConditionCollection *conditionCollection;
@property (readonly, nonatomic) BOOL supportsConditions;
@property (readonly, nonatomic) BOOL supportsEndEvents;
@property (readonly, nonatomic) HMTrigger *trigger;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSArray *endEventBuilders;
@property (readonly, nonatomic) BOOL requiresConfirmationToRun;
@property (readonly, nonatomic) BOOL secureActionsRequireConfirmationToRun;
@property (readonly, nonatomic) BOOL requiresLocationServicesAuthorization;
@property (readonly, nonatomic) BOOL requiresHomeHub;
@property (readonly, nonatomic) BOOL requiresUpdatedHomeHub;
@property (readonly, nonatomic) BOOL requiresFMFDeviceToRun;
@property (readonly, nonatomic, getter=areActionsAffectedByEndEvents) BOOL actionsAffectedByEndEvents;
@property (readonly, nonatomic) BOOL isShortcutOwned;
@property (readonly, nonatomic) HFDurationEventBuilder *designatedDurationEventBuilder;

+ (Class)homeKitRepresentationClass;
+ (id)triggerBuilderForTrigger:(id)a0 inHome:(id)a1 context:(id)a2;

- (id)_performValidation;
- (void).cxx_destruct;
- (void)setTrigger:(id)a0;
- (id)initWithHome:(id)a0;
- (BOOL)markTriggerAsHomeAppCreated;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (id)deleteTrigger;
- (void)setMarkTriggerAsHomeAppCreated:(BOOL)a0;
- (void)setEndEvent:(id)a0;
- (id)commitItem;
- (id)_updateName;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (void)removeServiceLikeItem:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)_updateEnabledState;
- (id)replaceCurrentTriggerWithTrigger:(id)a0;
- (id)initWithHome:(id)a0 context:(id)a1;
- (void)removeEndEventBuilder:(id)a0;
- (void)removeAllEndEventBuilders;
- (void)addEndEventBuilder:(id)a0;
- (id)_deleteTrigger:(id)a0 fromHome:(id)a1;
- (id)_commitAddTriggerToHome:(id)a0;
- (id)_updateAnonymousActionSet;
- (id)_updateActionSets;
- (id)_updateConditions;
- (id)_updateEndEvents;
- (id)_uniquelyRenameTrigger:(id)a0 pendingReplaceByNewTrigger:(id)a1;
- (void)_didReplaceBackingTrigger;
- (void)updateEndEventBuilder:(id)a0;
- (id)validateTrigger;

@end
