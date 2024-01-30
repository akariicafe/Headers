@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NFSecureXPCEventPublisher : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (nonatomic) BOOL available;

- (void)sendEvent:(id)a0;
- (void)sendSimpleEvent:(id)a0;
- (void)sendSimpleEvent:(id)a0 objectNumber:(id)a1;
- (void).cxx_destruct;
- (void)sendSimpleEvent:(id)a0 objectString:(id)a1;
- (id)initWithMachPort:(id)a0 queue:(id)a1;
- (void)_createConnection;
- (void)dealloc;
- (BOOL)sendDictionary:(id)a0;

@end
