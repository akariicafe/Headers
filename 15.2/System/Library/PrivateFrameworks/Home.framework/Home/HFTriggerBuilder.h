@class HFDurationEventBuilder, NSString, HFTriggerActionSetsBuilder, HFMutableSetDiff, NSArray, HFConditionCollection, HMTrigger;
@protocol HFTriggerBuilderContextProviding;

@interface HFTriggerBuilder : HFItemBuilder <HFComparable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFTriggerActionSetsBuilder *triggerActionSets;
@property (retain, nonatomic) HFMutableSetDiff *endEventBuildersDiff;
@property (retain, nonatomic) id<HFTriggerBuilderContextProviding> context;
@property (retain, nonatomic) HFConditionCollection *conditionCollection;
@property (readonly, nonatomic) BOOL supportsConditions;
@property (readonly, nonatomic) BOOL supportsEndEvents;
@property (readonly, nonatomic) HMTrigger *trigger;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL nameIsConfigured;
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
+ (id)triggerBuilderForTrigger:(id)a0 inHome:(id)a1 context:(id)a2 assertsFailure:(BOOL)a3;
+ (id)triggerBuilderForTrigger:(id)a0 inHome:(id)a1 context:(id)a2;

- (id)_performValidation;
- (void)setTrigger:(id)a0;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (void)setEndEvent:(id)a0;
- (id)_updateName;
- (id)_updateEnabledState;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)commitItem;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)compareToObject:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (void)removeServiceLikeItem:(id)a0;
- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (id)naturalLanguageDetailsWithOptions:(id)a0;
- (id)deleteTrigger;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)initWithHome:(id)a0 context:(id)a1;
- (id)replaceCurrentTriggerWithTrigger:(id)a0;
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
- (id)triggerBuilderWithContext:(id)a0;

@end
