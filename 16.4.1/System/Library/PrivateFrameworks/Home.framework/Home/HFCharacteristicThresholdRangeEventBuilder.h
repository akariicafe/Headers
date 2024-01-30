@class HMCharacteristic, NSString, HMNumberRange;

@interface HFCharacteristicThresholdRangeEventBuilder : HFCharacteristicEventBuilder <HFCharacteristicLikeEvent>

@property (retain, nonatomic) HMNumberRange *thresholdRange;
@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, nonatomic) id hf_representativeTriggerValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_wouldFireForValue:(id)a0 thresholdRange:(id)a1 characteristic:(id)a2;

- (id)initWithEvent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 thresholdRange:(id)a1;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)buildNewEventsFromCurrentState;
- (BOOL)wouldFireForCharacteristic:(id)a0 value:(id)a1;
- (id)compareToObject:(id)a0;
- (id)comparisonKey;
- (void)copyValuesFromCharacteristicEventBuilder:(id)a0;
- (BOOL)hf_wouldFireForValue:(id)a0;
- (id)triggeringValues;

@end
