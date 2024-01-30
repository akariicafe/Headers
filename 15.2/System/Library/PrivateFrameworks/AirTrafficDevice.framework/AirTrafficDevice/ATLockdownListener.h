@class NSString, NSObject;
@protocol OS_xpc_object;

@interface ATLockdownListener : ATMessageLinkListener {
    NSObject<OS_xpc_object> *_connection;
}

@property (readonly, copy, nonatomic) NSString *serviceName;

- (BOOL)start;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)_handleNewConnection:(id)a0;

@end
