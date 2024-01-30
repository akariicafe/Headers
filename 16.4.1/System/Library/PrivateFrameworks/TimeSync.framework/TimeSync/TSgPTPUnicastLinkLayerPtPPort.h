@class NSData, TSXgPTPUnicastLinkLayerPtPPort;

@interface TSgPTPUnicastLinkLayerPtPPort : TSgPTPFDPtPPort {
    TSXgPTPUnicastLinkLayerPtPPort *_implXPC;
}

@property (readonly, copy, nonatomic) NSData *destinationMACAddress;

+ (id)keyPathsForValuesAffectingDestinationMACAddress;

- (void).cxx_destruct;
- (id)destinationMACAddress;
- (id)initWithImplXPC:(id)a0;

@end
