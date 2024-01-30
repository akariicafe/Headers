@class DTXConnection, DTXChannel, NSObject, DTTapMessageHandler;
@protocol OS_dispatch_queue;

@interface DTTapRemote : DTTap {
    DTXConnection *_connection;
    DTXChannel *_channel;
    NSObject<OS_dispatch_queue> *_unprocessedMessageQueue;
    BOOL _connectionEnabled;
}

@property (readonly, retain, nonatomic) DTTapMessageHandler *messageHandler;

- (void)_start;
- (void)_stop;
- (void)_pause;
- (void)_unpause;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)_fetchDataForReason:(unsigned long long)a0;
- (id)initWithConfig:(id)a0 memoHandler:(id)a1 messageHandler:(id)a2 connection:(id)a3;

@end
