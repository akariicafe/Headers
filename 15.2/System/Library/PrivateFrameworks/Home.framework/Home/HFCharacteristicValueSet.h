@class NSMutableSet, NSMutableDictionary;

@interface HFCharacteristicValueSet : NSObject {
    NSMutableDictionary *_valuesByCharacteristicUUID;
}

@property (readonly, nonatomic) NSMutableSet *allCharacteristics;

- (void).cxx_destruct;
- (id)init;
- (void)setValue:(id)a0 forCharacteristic:(id)a1;
- (id)valueForCharacteristic:(id)a0;
- (void)removeValueForCharacteristic:(id)a0;

@end
