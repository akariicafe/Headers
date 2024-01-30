@class NSString;

@interface NFCNDEFReaderSession : NFCReaderSession <NFReaderSessionCallbacks> {
    BOOL _invalidateAfterFirstRead;
    unsigned long long _tagsRead;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)readingAvailable;

- (void)didTerminate:(id)a0;
- (void)didDetectNDEFMessages:(id)a0 fromTags:(id)a1 updateUICallback:(id /* block */)a2;
- (id)initWithDelegate:(id)a0 queue:(id)a1 invalidateAfterFirstRead:(BOOL)a2;
- (id)initWithDelegate:(id)a0 sessionDelegateType:(long long)a1 queue:(id)a2 pollMethod:(unsigned long long)a3 sessionConfig:(unsigned long long)a4;
- (void)restartPolling;
- (id)initWithDelegate:(id)a0 queue:(id)a1 pollMethod:(unsigned long long)a2;
- (void)connectToTag:(id)a0 completionHandler:(id /* block */)a1;
- (void)_callbackDidInvalidateWithError:(id)a0;
- (void)_callbackDidBecomeActive;

@end
