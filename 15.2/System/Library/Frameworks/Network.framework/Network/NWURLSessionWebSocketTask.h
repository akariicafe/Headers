@class NSData;

@interface NWURLSessionWebSocketTask : NWURLSessionTask

@property (nonatomic) long long maximumMessageSize;
@property (readonly, nonatomic) long long closeCode;
@property (readonly, copy, nonatomic) NSData *closeReason;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)receiveMessageWithCompletionHandler:(id /* block */)a0;
- (void)cancelWithCloseCode:(long long)a0 reason:(id)a1;
- (void)sendPingWithPongReceiveHandler:(id /* block */)a0;

@end
