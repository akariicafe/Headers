@class NSData, TSXgPTPUnicastUDPv6PtPPort;

@interface TSgPTPUnicastUDPv6PtPPort : TSgPTPFDPtPPort {
    TSXgPTPUnicastUDPv6PtPPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSData *destinationIPv6Address;

+ (id)keyPathsForValuesAffectingDestinationIPv6Address;

- (void).cxx_destruct;
- (id)destinationIPv6Address;
- (id)initWithImplXPC:(id)a0;

@end
