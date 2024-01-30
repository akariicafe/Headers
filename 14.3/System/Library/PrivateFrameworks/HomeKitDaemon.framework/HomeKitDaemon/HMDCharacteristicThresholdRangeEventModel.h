@class NSNumber;

@interface HMDCharacteristicThresholdRangeEventModel : HMDCharacteristicEventBaseModel

@property (retain, nonatomic) NSNumber *min;
@property (retain, nonatomic) NSNumber *max;

+ (id)properties;
+ (id)eventModelWithDictionary:(id)a0 home:(id)a1 eventTriggerUUID:(id)a2 message:(id)a3 checkForSupport:(BOOL)a4;

@end
