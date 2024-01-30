@class NSNumber, TSXgPTPUnicastUDPv4EtEPort;

@interface TSgPTPUnicastUDPv4EtEPort : TSgPTPFDEtEPort {
    TSXgPTPUnicastUDPv4EtEPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;

+ (id)keyPathsForValuesAffectingDestinationIPv4Address;

- (void).cxx_destruct;
- (id)destinationIPv4Address;
- (id)initWithImplXPC:(id)a0;

@end
