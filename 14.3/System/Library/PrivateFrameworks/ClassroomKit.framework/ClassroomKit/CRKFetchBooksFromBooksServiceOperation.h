@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation {
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (id)initWithRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;

@end
