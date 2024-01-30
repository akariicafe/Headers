@class MFCountingDataConsumer, NSMutableArray, MFBaseFilterDataConsumer;

@interface MFIMAPDownload : NSObject {
    unsigned int _uid;
    NSMutableArray *_pendingFetchResults;
    MFCountingDataConsumer *_countingConsumer;
}

@property (readonly, nonatomic) MFBaseFilterDataConsumer *mainConsumer;

- (unsigned int)uid;
- (void).cxx_destruct;
- (unsigned long long)expectedLength;
- (id)error;
- (BOOL)isComplete;
- (void)setError:(id)a0;
- (unsigned long long)bytesFetched;
- (BOOL)isSuccessful;
- (id)initWithUid:(unsigned int)a0;
- (void)handleFetchResult:(id)a0;
- (void)processResults;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (unsigned long long)lengthOfDataBeforeLineConversion;

@end
