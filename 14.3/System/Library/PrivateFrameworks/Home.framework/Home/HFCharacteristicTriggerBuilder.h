@class NSSet, NSMutableSet;

@interface HFCharacteristicTriggerBuilder : HFTriggerBuilder

@property (retain, nonatomic) NSMutableSet *triggerEvents;
@property (readonly, nonatomic) NSSet *characteristics;
@property (nonatomic) BOOL markTriggerAsHomeAppCreated;

- (id)_performValidation;
- (void).cxx_destruct;
- (BOOL)supportsConditions;
- (BOOL)supportsEndEvents;
- (id)commitCreateTrigger;
- (id)commitEditTrigger;
- (id)naturalLanguageNameOfType:(unsigned long long)a0;
- (id)deleteTrigger;
- (void)setCharacteristic:(id)a0 triggerValue:(id)a1;
- (void)setCharacteristic:(id)a0 triggerValueRange:(id)a1;
- (void)removeAllCharacteristics;
- (BOOL)wouldFireForCharacteristic:(id)a0 value:(id)a1;
- (id)thresholdValueForCharacteristic:(id)a0 thresholdValueRange:(id)a1;
- (id)commitItem;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1 context:(id)a2;
- (id)_updateEvents;
- (id)_lazilyMarkTriggerAsHomeAppCreated;
- (void)removeCharacteristic:(id)a0;
- (id)_existingEventsForCharacteristic:(id)a0;
- (void)removeServiceLikeItem:(id)a0;

@end
