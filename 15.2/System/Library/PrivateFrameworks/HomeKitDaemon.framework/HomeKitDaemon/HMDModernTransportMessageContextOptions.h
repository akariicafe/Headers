@class NSSet;

@interface HMDModernTransportMessageContextOptions : NSObject

@property (readonly) NSSet *transports;
@property (readonly) double timeoutOverride;
@property (readonly) BOOL expectsMultipleResponses;
@property (readonly, getter=isTrackingDeviceReachability) BOOL trackingDeviceReachability;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithBuilder:(id)a0;
- (void).cxx_destruct;

@end
