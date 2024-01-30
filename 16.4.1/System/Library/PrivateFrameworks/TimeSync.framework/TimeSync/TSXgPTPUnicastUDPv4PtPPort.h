@class NSNumber;

@interface TSXgPTPUnicastUDPv4PtPPort : TSXgPTPFDPtPPort

@property (copy, nonatomic) NSNumber *destinationIPv4Address;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;

@end
