@class NSMutableSet, NSMutableDictionary;

@interface HFCharacteristicValueSet : NSObject {
    NSMutableDictionary *_valuesByCharacteristicUUID;
}

@property (readonly, nonatomic) NSMutableSet *allCharacteristics;

- (id)init;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forCharacteristic:(id)a1;
- (void)removeValueForCharacteristic:(id)a0;
- (id)valueForCharacteristic:(id)a0;

@end
