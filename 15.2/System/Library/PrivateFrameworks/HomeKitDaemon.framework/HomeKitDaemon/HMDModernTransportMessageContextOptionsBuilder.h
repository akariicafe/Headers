@class NSSet;

@interface HMDModernTransportMessageContextOptionsBuilder : NSObject

@property (copy) NSSet *transports;
@property double timeoutOverride;
@property BOOL expectsMultipleResponses;
@property BOOL trackingDeviceReachability;

- (void).cxx_destruct;

@end
