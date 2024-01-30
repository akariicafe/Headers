@class NSString, NSMutableDictionary, NSMutableData, NSObject;
@protocol OS_dispatch_queue;

@interface ATLegacyMessageLink : ATLockdownMessageLink <ATSocketDelegate, ATLegacyMessageLink> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableData *_incomingData;
    long long _expectedBytesRemaining;
    NSMutableDictionary *_requestHandlerTable;
    double _idleTimeoutInterval;
}

@property (nonatomic) BOOL hostSupportsLocalCloudDownloads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (BOOL)open;
- (BOOL)idleTimeoutEnabled;
- (void).cxx_destruct;
- (void)socket:(id)a0 hasDataAvailable:(const char *)a1 length:(long long)a2;
- (void)socketDidClose:(id)a0;
- (id)initWithSocket:(id)a0;
- (double)_idleTimeoutInterval;
- (void)setHandlerForMessage:(id)a0 handler:(id /* block */)a1;
- (void)removeHandlerForMessage:(id)a0;
- (void)sendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)_sendData:(const char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;
- (void)_checkMessageTimeouts;
- (void)_sendPingMessage;
- (void)_handlePingMessage:(id)a0 fromLink:(id)a1;
- (void)_handlePongMessage:(id)a0 fromLink:(id)a1;

@end
