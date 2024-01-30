@class NSMutableArray;

@interface MFIMAPCompoundDownload : MFIMAPDownload {
    NSMutableArray *_subdownloads;
}

- (BOOL)isComplete;
- (void).cxx_destruct;
- (unsigned long long)expectedLength;
- (BOOL)isSuccessful;
- (unsigned long long)bytesFetched;
- (void)processResults;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (id)subdownloads;
- (void)addSubdownload:(id)a0;
- (void)removeSubdownload:(id)a0;

@end
