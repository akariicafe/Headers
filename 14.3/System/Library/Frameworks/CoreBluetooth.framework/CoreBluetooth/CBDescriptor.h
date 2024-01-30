@class CBCharacteristic, CBPeripheral, NSNumber;

@interface CBDescriptor : CBAttribute

@property (nonatomic) CBCharacteristic *characteristic;
@property (retain) id value;
@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) NSNumber *handle;

- (void).cxx_destruct;
- (id)initWithCharacteristic:(id)a0 dictionary:(id)a1;
- (id)handleValueUpdated:(id)a0;
- (id)handleValueWritten:(id)a0;
- (id)description;
- (void)invalidate;

@end
