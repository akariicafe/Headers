@class NSData;

@interface TSXgPTPUnicastLinkLayerEtEPort : TSXgPTPFDEtEPort

@property (copy, nonatomic) NSData *destinationMACAddress;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)a0;

@end
