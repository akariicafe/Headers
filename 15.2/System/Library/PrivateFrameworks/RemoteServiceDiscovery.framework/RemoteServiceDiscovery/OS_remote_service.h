@class OS_remote_device, NSObject;
@protocol OS_xpc_object;

@interface OS_remote_service : NSObject {
    char *name;
    NSObject<OS_xpc_object> *properties;
    NSObject<OS_xpc_object> *connection;
    OS_remote_device *device;
    unsigned int connect_timeout;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
