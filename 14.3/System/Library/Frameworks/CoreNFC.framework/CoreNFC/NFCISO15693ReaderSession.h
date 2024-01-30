@interface NFCISO15693ReaderSession : NFCReaderSession

+ (BOOL)readingAvailable;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)didDetectTags:(id)a0;
- (id)initWithDelegate:(id)a0 sessionDelegateType:(long long)a1 queue:(id)a2 pollMethod:(unsigned long long)a3 sessionConfig:(unsigned long long)a4;
- (void)restartPolling;
- (id)initWithDelegate:(id)a0 queue:(id)a1 pollMethod:(unsigned long long)a2;

@end
