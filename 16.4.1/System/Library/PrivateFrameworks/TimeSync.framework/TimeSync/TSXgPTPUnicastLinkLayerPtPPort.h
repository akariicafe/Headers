@class NSData;

@interface TSXgPTPUnicastLinkLayerPtPPort : TSXgPTPFDPtPPort

@property (copy, nonatomic) NSData *destinationMACAddress;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;

@end
