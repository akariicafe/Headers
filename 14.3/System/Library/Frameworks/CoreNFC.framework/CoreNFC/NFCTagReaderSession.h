@protocol NFCTag;

@interface NFCTagReaderSession : NFCReaderSession {
    id<NFCTag> _connectedTag;
    id _swiftDelegateWrapper;
}

@property (readonly, retain, nonatomic) id<NFCTag> connectedTag;

+ (BOOL)readingAvailable;

- (void).cxx_destruct;
- (void)didDetectTags:(id)a0;
- (id)initWithDelegate:(id)a0 sessionDelegateType:(long long)a1 queue:(id)a2 pollMethod:(unsigned long long)a3 sessionConfig:(unsigned long long)a4;
- (void)restartPolling;
- (void)connectToTag:(id)a0 completionHandler:(id /* block */)a1;
- (void)_callbackDidInvalidateWithError:(id)a0;
- (void)_callbackDidBecomeActive;
- (id)initWithPollingOption:(long long)a0 delegate:(id)a1 delegateType:(long long)a2 queue:(id)a3;
- (id)initWithPollingOption:(long long)a0 delegate:(id)a1 queue:(id)a2;
- (id)initWithPollingOption:(long long)a0 swiftDelegate:(id)a1 queue:(id)a2;

@end
