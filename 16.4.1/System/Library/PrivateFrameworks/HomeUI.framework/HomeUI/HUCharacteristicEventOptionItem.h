@class HMCharacteristic, NSSet, NSArray, HMNumberRange, NSNumber;
@protocol NSCopying;

@interface HUCharacteristicEventOptionItem : HFItem

@property (readonly, nonatomic) NSSet *characteristics;
@property (readonly, copy, nonatomic) HMCharacteristic *mainCharacteristic;
@property (readonly, copy, nonatomic) id<NSCopying> triggerValue;
@property (readonly, copy, nonatomic) HMNumberRange *triggerValueRange;
@property (readonly, copy, nonatomic) HMNumberRange *thresholdValueRange;
@property (retain, nonatomic) HUCharacteristicEventOptionItem *childItem;
@property (retain, nonatomic) NSNumber *thresholdValue;
@property (readonly, copy, nonatomic) HMNumberRange *triggerValueRangeByApplyingThreshold;
@property (readonly, copy, nonatomic) NSArray *validTriggerValues;
@property (readonly, copy, nonatomic) NSArray *visibleTriggerValues;
@property (readonly, nonatomic) id representativeTriggerValue;

- (id)init;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithCharacteristics:(id)a0 thresholdValueRange:(id)a1;
- (id)initWithCharacteristics:(id)a0 triggerValue:(id)a1;
- (id)initWithCharacteristics:(id)a0 triggerValueRange:(id)a1;
- (BOOL)isValidThresholdValue:(id)a0;
- (id)localizedDescriptionForThresholdValue:(id)a0;
- (id)localizedListDescriptionForThresholdValue:(id)a0;

@end
