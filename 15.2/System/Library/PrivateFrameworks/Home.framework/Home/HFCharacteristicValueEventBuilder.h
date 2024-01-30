@class NSString, HMCharacteristic;
@protocol NSCopying;

@interface HFCharacteristicValueEventBuilder : HFCharacteristicEventBuilder <HFCharacteristicLikeEvent>

@property (retain, nonatomic) id<NSCopying> triggerValue;
@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, nonatomic) id hf_representativeTriggerValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)a0 triggerValue:(id)a1;
- (void)copyValuesFromCharacteristicEventBuilder:(id)a0;
- (id)triggeringValues;
- (BOOL)wouldFireForCharacteristic:(id)a0 value:(id)a1;
- (id)comparisonKey;
- (id)buildNewEventsFromCurrentState;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)compareToObject:(id)a0;

@end
