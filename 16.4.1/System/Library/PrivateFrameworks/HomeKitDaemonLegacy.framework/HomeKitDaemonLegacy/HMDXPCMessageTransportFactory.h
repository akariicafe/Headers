@class HMDXPCMessageTransport;

@interface HMDXPCMessageTransportFactory : NSObject <HMDXPCMessageTransportFactory>

@property (readonly) HMDXPCMessageTransport *defaultTransport;

@end
