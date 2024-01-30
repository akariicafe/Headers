@class PPNamedEntityStore, NSString, PPClientFeedbackHelper, _PASLock;

@interface PPReranker : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPNamedEntityStore *_namedEntityStore;
    PPClientFeedbackHelper *_clientFeedbackHelper;
    _PASLock *_dataLock;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)initWithNamedEntityStore:(id)a0;
- (id)_lazyLoadEntityRankMapWithError:(id *)a0;
- (id)rerankedMediaItems:(id)a0 error:(id *)a1;

@end
