@class NSMutableSet, NSXPCConnection;

@interface Client : NSObject {
    long long _activeMessageCount;
    long long _barrierMessageCount;
    long long _droppedMessageCount;
    BOOL _shouldSendMessages;
    BOOL _forceUpdateOnWake;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableSet *subscribedNOIs;

- (void)_incrementMessageCounter:(long long)a0;
- (id)initWithConn:(id)a0;
- (void)_sendBarrierIfNecessaryWithBlock:(id /* block */)a0;
- (BOOL)_shouldSendMessages;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_decrementMessageCounter:(long long)a0;
- (id)description;
- (void).cxx_destruct;

@end
