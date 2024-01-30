@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NFSecureXPCEventPublisher : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;

- (BOOL)_setupConnection;
- (void)sendEvent:(id)a0;
- (void)sendSimpleEvent:(id)a0 objectString:(id)a1;
- (void)sendSimpleEvent:(id)a0;
- (BOOL)sendDictionary:(id)a0;
- (void)dealloc;
- (id)initWithMachPort:(id)a0 queue:(id)a1;
- (void)sendSimpleEvent:(id)a0 objectNumber:(id)a1;
- (void).cxx_destruct;

@end
