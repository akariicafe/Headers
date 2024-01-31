@class NSArray, NSNumber, CBPeripheral;

@interface CBService : CBAttribute

@property (nonatomic) BOOL isPrimary;
@property (retain) NSArray *includedServices;
@property (retain) NSArray *characteristics;
@property (readonly, nonatomic) NSNumber *startHandle;
@property (readonly, nonatomic) NSNumber *endHandle;
@property (readonly, weak, nonatomic) CBPeripheral *peripheral;

- (void)invalidate;
- (id)description;
- (void).cxx_destruct;
- (id)handleCharacteristicsDiscovered:(id)a0;
- (id)handleIncludedServicesDiscovered:(id)a0;
- (id)initWithPeripheral:(id)a0 dictionary:(id)a1;

@end
