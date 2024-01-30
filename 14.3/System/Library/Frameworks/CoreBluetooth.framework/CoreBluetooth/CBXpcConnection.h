@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CBXpcConnectionDelegate, OS_xpc_object;

@interface CBXpcConnection : NSObject {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_options;
    int _sessionType;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
    BOOL _uiAppIsBackgrounded;
}

@property (weak, nonatomic) id<CBXpcConnectionDelegate> delegate;

- (void)setTargetQueue:(id)a0;
- (id)sendSyncMsg:(unsigned short)a0 args:(id)a1;
- (void)disconnect;
- (void)sendMsg:(unsigned short)a0 args:(id)a1;
- (void)_handleMsg:(id)a0;
- (void)_handleConnectionEvent:(id)a0;
- (void)_checkIn;
- (id)_nameForMessage:(unsigned short)a0;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification;
- (void)_applicationWillEnterForegroundNotification;
- (id)initWithDelegate:(id)a0 queue:(id)a1 options:(id)a2 sessionType:(int)a3;
- (void)_checkOut;
- (void)_sendBarrier;
- (id)_allocXpcMsg:(unsigned short)a0 args:(id)a1;
- (void)_handleReset;
- (void)_handleFinalized;
- (void)_handleInvalid;

@end
