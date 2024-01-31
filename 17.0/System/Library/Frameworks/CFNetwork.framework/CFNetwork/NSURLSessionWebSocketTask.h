@class NSData;

@interface NSURLSessionWebSocketTask : NSURLSessionTask

@property long long maximumMessageSize;
@property (readonly) long long closeCode;
@property (readonly, copy) NSData *closeReason;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)receiveMessageWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancelWithCloseCode:(long long)a0 reason:(id)a1;
- (void)sendPingWithPongReceiveHandler:(id /* block */)a0;

@end
