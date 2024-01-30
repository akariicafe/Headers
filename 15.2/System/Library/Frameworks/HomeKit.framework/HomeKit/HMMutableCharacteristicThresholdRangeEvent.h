@class HMNumberRange, HMCharacteristic;

@interface HMMutableCharacteristicThresholdRangeEvent : HMCharacteristicThresholdRangeEvent

@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (copy, nonatomic) HMNumberRange *thresholdRange;

@end
