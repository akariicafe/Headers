@class NPTunnelTuscanyEndpoint, NSDictionary, NSData, NWEndpoint;

@interface NPFlowProperties : NSObject

@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned long long serviceID;
@property (nonatomic) unsigned int flowIdentifier;
@property (nonatomic) double fallbackTimeout;
@property (nonatomic) BOOL enableNSP;
@property (retain, nonatomic) NSData *requestData;
@property (retain, nonatomic) NPTunnelTuscanyEndpoint *replacementEndpoint;
@property (retain, nonatomic) NSDictionary *replacementAddressMap;
@property (nonatomic) int dataMode;
@property (retain, nonatomic) NWEndpoint *directEndpoint;
@property (nonatomic) BOOL isLoopback;
@property (nonatomic) unsigned long long *timestamps;
@property (nonatomic) BOOL disableIdleTimeout;

- (void).cxx_destruct;
- (void)dealloc;
- (id)copyTLVData;
- (id)initWithTLVData:(id)a0;

@end
