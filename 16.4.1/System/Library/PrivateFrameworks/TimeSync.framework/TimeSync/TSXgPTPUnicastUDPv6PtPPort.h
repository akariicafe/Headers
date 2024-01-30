@class NSData;

@interface TSXgPTPUnicastUDPv6PtPPort : TSXgPTPFDPtPPort

@property (copy, nonatomic) NSData *destinationIPv6Address;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;

@end
