@class NSSet, NSString, HMCharacteristic;
@protocol NSCopying;

@interface HFCharacteristicMultiValueEventBuilder : HFCharacteristicEventBuilder <HFCharacteristicLikeEvent>

@property (retain, nonatomic) NSSet *triggerValues;
@property (retain, nonatomic) id<NSCopying> representativeTargetValue;
@property (readonly, nonatomic) HMCharacteristic *characteristic;
@property (readonly, nonatomic) id hf_representativeTriggerValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCharacteristic:(id)a0 values:(id)a1;
- (void)copyValuesFromCharacteristicEventBuilder:(id)a0;
- (id)triggeringValues;
- (BOOL)wouldFireForCharacteristic:(id)a0 value:(id)a1;
- (id)comparisonKey;
- (id)buildNewEventsFromCurrentState;
- (id)naturalLanguageNameWithOptions:(id)a0;

@end
