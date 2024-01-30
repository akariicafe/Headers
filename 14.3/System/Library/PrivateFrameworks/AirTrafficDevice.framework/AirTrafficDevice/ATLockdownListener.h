@class NSString, NSObject;
@protocol OS_xpc_object;

@interface ATLockdownListener : ATMessageLinkListener {
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly, copy, nonatomic) NSString *serviceName;

- (void).cxx_destruct;
- (void)_handleNewConnection:(id)a0;
- (void)stop;
- (id)initWithServiceName:(id)a0;
- (BOOL)start;

@end
