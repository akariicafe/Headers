@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CPEndpointListenerWrapper : NSObject <BSXPCCoding>

@property (retain, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
