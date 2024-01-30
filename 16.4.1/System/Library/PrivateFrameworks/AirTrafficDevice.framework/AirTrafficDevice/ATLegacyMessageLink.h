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

- (BOOL)open;
- (void)socket:(id)a0 hasDataAvailable:(const char *)a1 length:(long long)a2;
- (void)close;
- (void)socketDidClose:(id)a0;
- (id)initWithSocket:(id)a0;
- (void).cxx_destruct;
- (BOOL)idleTimeoutEnabled;
- (void)sendMessage:(id)a0 withCompletion:(id /* block */)a1;
- (void)_checkMessageTimeouts;
- (void)_handlePingMessage:(id)a0 fromLink:(id)a1;
- (void)_handlePongMessage:(id)a0 fromLink:(id)a1;
- (double)_idleTimeoutInterval;
- (BOOL)_sendData:(const char *)a0 offset:(unsigned int)a1 len:(unsigned int)a2 error:(id *)a3;
- (void)_sendPingMessage;
- (void)removeHandlerForMessage:(id)a0;
- (void)setHandlerForMessage:(id)a0 handler:(id /* block */)a1;

@end
