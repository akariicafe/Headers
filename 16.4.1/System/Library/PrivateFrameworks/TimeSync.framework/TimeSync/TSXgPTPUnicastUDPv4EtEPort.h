@class NSNumber;

@interface TSXgPTPUnicastUDPv4EtEPort : TSXgPTPFDEtEPort

@property (copy, nonatomic) NSNumber *destinationIPv4Address;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;

@end
