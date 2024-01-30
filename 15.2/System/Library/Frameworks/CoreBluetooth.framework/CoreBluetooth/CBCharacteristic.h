@class CBService, NSArray, NSData, CBPeripheral, NSNumber;

@interface CBCharacteristic : CBAttribute

@property (weak, nonatomic) CBService *service;
@property (nonatomic) unsigned long long properties;
@property (retain) NSData *value;
@property (retain) NSArray *descriptors;
@property BOOL isNotifying;
@property (readonly, nonatomic) unsigned long long valueTimestamp;
@property (readonly, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) NSNumber *handle;
@property (readonly, nonatomic) NSNumber *valueHandle;
@property (readonly) BOOL isBroadcasted;

- (id)initWithService:(id)a0 dictionary:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id)handleValueUpdated:(id)a0;
- (id)handleValueWritten:(id)a0;
- (id)handleValueBroadcasted:(id)a0;
- (id)handleValueNotifying:(id)a0;
- (id)handleDescriptorsDiscovered:(id)a0;

@end
