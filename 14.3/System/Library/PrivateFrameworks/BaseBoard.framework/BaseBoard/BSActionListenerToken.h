@class NSObject;
@protocol OS_xpc_object;

@interface BSActionListenerToken : NSObject {
    unsigned int _port;
    NSObject<OS_xpc_object> *_endpoint;
}

- (void)dealloc;

@end
