@class NSString, NSError;

@interface MFIMAPSimpleDownload : MFIMAPDownload {
    NSString *_section;
    NSError *_error;
    unsigned long long _length;
    unsigned char _knownLength : 1;
    unsigned char _complete : 1;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    unsigned long long _originalDataLength;
    unsigned long long _offsetAdjustment;
}

- (BOOL)isComplete;
- (void)setError:(id)a0;
- (void)dealloc;
- (id)error;
- (id)section;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (unsigned long long)bytesFetched;
- (unsigned long long)expectedLength;
- (void)handleFetchResult:(id)a0;
- (id)initWithUid:(unsigned int)a0 section:(id)a1 estimatedLength:(unsigned long long)a2 consumer:(id)a3;
- (id)initWithUid:(unsigned int)a0 section:(id)a1 length:(unsigned long long)a2 consumer:(id)a3;
- (id)initWithUid:(unsigned int)a0 section:(id)a1 length:(unsigned long long)a2 lengthIsKnown:(BOOL)a3 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 consumer:(id)a5;
- (id)initWithUid:(unsigned int)a0 section:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 consumer:(id)a3;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (void)processResults;

@end
