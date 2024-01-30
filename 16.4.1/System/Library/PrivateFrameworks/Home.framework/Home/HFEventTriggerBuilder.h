@class NSSet, NSMutableDictionary, NSArray, NSMutableSet, HFEventBuilderLocationInterface, HFEventTriggerBuilderTimeInterface, HFCharacteristicTriggerBuilderInterface;

@interface HFEventTriggerBuilder : HFTriggerBuilder

@property (readonly, nonatomic) HFCharacteristicTriggerBuilderInterface *characteristicInterface;
@property (readonly, nonatomic) HFEventBuilderLocationInterface *locationInterface;
@property (readonly, nonatomic) HFEventTriggerBuilderTimeInterface *timeInterface;
@property (retain, nonatomic) NSMutableSet *mutableEventBuilders;
@property (retain, nonatomic) NSMutableDictionary *extensionInterfaces;
@property (readonly, nonatomic) BOOL _effectiveExecuteOnce;
@property (readonly, nonatomic) NSArray *eventBuilders;
@property (retain, nonatomic) NSArray *recurrences;
@property (nonatomic) BOOL executeOnce;
@property (readonly, nonatomic) NSSet *eventTypes;
@property (readonly, nonatomic) NSSet *characteristics;
@property (nonatomic) BOOL shouldMarkTriggerAsHomeAppCreated;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)deleteTrigger;
- (id)validationError;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (void)addEventBuilder:(id)a0;
- (void)applyEventBuilderDiff:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (id)naturalLanguageDetailsWithOptions:(id)a0;
- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (void)removeEventBuilder:(id)a0;
- (void)removeServiceLikeItem:(id)a0;
- (BOOL)requiresConfirmationToRun;
- (BOOL)supportsEndEvents;
- (id)createEndEvents;
- (id)_allActionSets;
- (void)_createEventBuilders;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (id)_lazy_performValidation;
- (id)_updateEvents;
- (id)_updateExecuteOnce;
- (id)_updateRecurrences;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)compareToObject:(id)a0;
- (id)createEvents;
- (id)createNewTriggerBuilder;
- (id)lazilyFinishCommitingTrigger;
- (BOOL)supportsConditions;
- (id)updateTriggerBuilder:(id)a0;

@end
