@class NSMutableArray;

@interface MFIMAPCompoundDownload : MFIMAPDownload {
    NSMutableArray *_subdownloads;
}

- (void).cxx_destruct;
- (unsigned long long)expectedLength;
- (BOOL)isComplete;
- (unsigned long long)bytesFetched;
- (BOOL)isSuccessful;
- (void)processResults;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (id)subdownloads;
- (void)addSubdownload:(id)a0;
- (void)removeSubdownload:(id)a0;

@end
