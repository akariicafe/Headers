@class NSData, TSXgPTPUnicastUDPv6EtEPort;

@interface TSgPTPUnicastUDPv6EtEPort : TSgPTPFDEtEPort {
    TSXgPTPUnicastUDPv6EtEPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;

+ (id)keyPathsForValuesAffectingDestinationIPv6Address;

- (void).cxx_destruct;
- (id)destinationIPv6Address;
- (id)initWithImplXPC:(id)a0;

@end
