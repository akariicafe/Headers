@class NSNumber, TSXgPTPUnicastUDPv4PtPPort;

@interface TSgPTPUnicastUDPv4PtPPort : TSgPTPFDPtPPort {
    TSXgPTPUnicastUDPv4PtPPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSNumber *destinationIPv4Address;

+ (id)keyPathsForValuesAffectingDestinationIPv4Address;

- (void).cxx_destruct;
- (id)destinationIPv4Address;
- (id)initWithImplXPC:(id)a0;

@end
