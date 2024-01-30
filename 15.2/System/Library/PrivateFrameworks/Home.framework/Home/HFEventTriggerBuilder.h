@class HFEventTrigggerBuilderTimeInterface, NSMutableDictionary, NSArray, NSMutableSet, HFEventBuilderLocationInterface, NSSet, HFCharacteristicTriggerBuilderInterface;

@interface HFEventTriggerBuilder : HFTriggerBuilder

@property (readonly, nonatomic) HFCharacteristicTriggerBuilderInterface *characteristicInterface;
@property (readonly, nonatomic) HFEventBuilderLocationInterface *locationInterface;
@property (readonly, nonatomic) HFEventTrigggerBuilderTimeInterface *timeInterface;
@property (retain, nonatomic) NSMutableSet *mutableEventBuilders;
@property (retain, nonatomic) NSMutableDictionary *extensionInterfaces;
@property (readonly, nonatomic) NSArray *eventBuilders;
@property (retain, nonatomic) NSArray *recurrences;
@property (nonatomic) BOOL executeOnce;
@property (readonly, nonatomic) NSSet *eventTypes;
@property (readonly, nonatomic) NSSet *characteristics;
@property (nonatomic) BOOL shouldMarkTriggerAsHomeAppCreated;

+ (Class)homeKitRepresentationClass;

- (id)_performValidation;
- (void).cxx_destruct;
- (id)commitItem;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)compareToObject:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (void)_createEventBuilders;
- (void)addEventBuilder:(id)a0;
- (void)removeEventBuilder:(id)a0;
- (id)_allActionSets;
- (id)_createEvents;
- (void)removeServiceLikeItem:(id)a0;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (id)_updateExecuteOnce;
- (id)_updateEvents;
- (id)_updateRecurrences;
- (void)applyEventBuilderDiff:(id)a0;
- (BOOL)supportsConditions;
- (BOOL)supportsEndEvents;
- (BOOL)requiresConfirmationToRun;
- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (id)naturalLanguageDetailsWithOptions:(id)a0;
- (id)deleteTrigger;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;

@end
