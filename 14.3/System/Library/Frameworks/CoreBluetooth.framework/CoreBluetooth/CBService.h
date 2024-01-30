@class NSArray, NSNumber, CBPeripheral;

@interface CBService : CBAttribute

@property (nonatomic) BOOL isPrimary;
@property (retain) NSArray *includedServices;
@property (retain) NSArray *characteristics;
@property (readonly, nonatomic) NSNumber *startHandle;
@property (readonly, nonatomic) NSNumber *endHandle;
@property (readonly, nonatomic) CBPeripheral *peripheral;

- (void).cxx_destruct;
- (id)initWithPeripheral:(id)a0 dictionary:(id)a1;
- (id)handleIncludedServicesDiscovered:(id)a0;
- (id)handleCharacteristicsDiscovered:(id)a0;
- (id)description;
- (void)invalidate;

@end
