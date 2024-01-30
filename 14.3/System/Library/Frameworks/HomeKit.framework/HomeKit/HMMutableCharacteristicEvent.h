@class HMCharacteristic;
@protocol NSCopying;

@interface HMMutableCharacteristicEvent : HMCharacteristicEvent

@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (copy, nonatomic) id<NSCopying> triggerValue;

@end
