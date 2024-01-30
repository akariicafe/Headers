@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation {
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (id)initWithRequest:(id)a0;
- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (id)init;

@end
