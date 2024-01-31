@class NSArray, NSError;

@interface CBWriteRequest : NSObject {
    struct iovec { void *iov_base; unsigned long long iov_len; } _iov[16];
    struct iovec { void *x0; unsigned long long x1; } *_iop;
    int _ion;
    unsigned long long _offset;
}

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSArray *dataArray;
@property (nonatomic) BOOL endOfData;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
