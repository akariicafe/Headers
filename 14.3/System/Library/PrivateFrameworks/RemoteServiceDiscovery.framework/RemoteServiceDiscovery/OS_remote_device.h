@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface OS_remote_device : NSObject {
    char *device_name;
    char *device_alias;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSObject<OS_xpc_object> *properties;
@property (nonatomic) unsigned int type;
@property (nonatomic) char *uuid;
@property (nonatomic) unsigned long long device_id;
@property (nonatomic) unsigned long long messaging_protocol_version;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy, nonatomic) id /* block */ connected_callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connected_callback_queue;
@property (retain, nonatomic) OS_remote_device *connected_callback_self_retain;
@property (copy, nonatomic) id /* block */ disconnected_callback;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *disconnected_callback_queue;
@property (retain, nonatomic) OS_remote_device *disconnected_callback_self_retain;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
