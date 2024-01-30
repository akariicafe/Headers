@class WFNetworkScanRecord;

@interface WFStubInterface : WFInterface {
    WFNetworkScanRecord *_currentNetwork;
}

@property BOOL currentNetworkIsDirected;
@property BOOL ipv4SelfAssigned;
@property BOOL hasNoGatewayIP;

- (id)currentNetwork;
- (void)setCurrentNetwork:(id)a0;
- (id)interfaceName;
- (void).cxx_destruct;

@end
