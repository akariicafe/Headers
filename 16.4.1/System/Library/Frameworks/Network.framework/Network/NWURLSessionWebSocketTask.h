@class NSURLResponse, NSData, NSObject, NSMutableArray;
@protocol OS_nw_connection;

@interface NWURLSessionWebSocketTask : NWURLSessionTask {
    BOOL _receiving;
    unsigned short _pingSeed;
    long long _closeCode;
    NSData *_closeReason;
    NSURLResponse *_storedResponse;
    NSObject<OS_nw_connection> *_upgradedConnection;
    NSMutableArray *_pendingWork;
    NSMutableArray *_pendingReceiveCompletionHandlers;
}

@property (nonatomic) long long maximumMessageSize;
@property (readonly, nonatomic) long long closeCode;
@property (readonly, copy, nonatomic) NSData *closeReason;

- (void)_sendCloseCode:(long long)a0 reason:(id)a1;
- (void)receiveMessageWithCompletionHandler:(id /* block */)a0;
- (void)sendPingWithPongReceiveHandler:(id /* block */)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)response;
- (void).cxx_destruct;
- (void)cancelWithCloseCode:(long long)a0 reason:(id)a1;
- (void)completeTaskWithError:(id)a0;
- (void)startNextLoad;

@end
