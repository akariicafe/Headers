@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation {
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (id)initWithRequest:(id)a0;
- (void)main;
- (BOOL)isAsynchronous;
- (id)init;
- (void).cxx_destruct;

@end
