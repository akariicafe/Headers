@class OS_remote_device, NSObject;
@protocol OS_xpc_object;

@interface OS_remote_service : NSObject {
    char *name;
    NSObject<OS_xpc_object> *properties;
    NSObject<OS_xpc_object> *connection;
    OS_remote_device *device;
    unsigned int connect_timeout;
    NSObject<OS_xpc_object> *keepalive;
    unsigned int keepalive_time;
    unsigned int keepcount;
    unsigned int keepinterval;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
