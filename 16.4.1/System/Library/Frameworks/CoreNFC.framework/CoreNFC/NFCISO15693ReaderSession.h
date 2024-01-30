@class NSString;

@interface NFCISO15693ReaderSession : NFCReaderSession <NFReaderSessionCallbacks>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)readingAvailable;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)didDetectTags:(id)a0 connectedTagIndex:(unsigned long long)a1;
- (void)restartPolling;
- (id)initWithDelegate:(id)a0 queue:(id)a1 pollMethod:(unsigned long long)a2;
- (id)initWithDelegate:(id)a0 sessionDelegateType:(long long)a1 queue:(id)a2 pollMethod:(unsigned long long)a3 sessionConfig:(unsigned long long)a4;

@end
