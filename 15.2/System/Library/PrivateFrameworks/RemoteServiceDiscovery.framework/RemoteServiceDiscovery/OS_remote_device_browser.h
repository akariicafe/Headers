@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface OS_remote_device_browser : NSObject

@property (nonatomic) unsigned int device_type;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cbq;
@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL canceling;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;
- (void)dealloc;

@end
