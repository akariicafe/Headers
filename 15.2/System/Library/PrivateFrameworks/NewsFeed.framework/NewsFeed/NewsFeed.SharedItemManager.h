@interface NewsFeed.SharedItemManager : NSObject <FCBoostableOperationThrottlerDelegate> {
    void /* unknown type, empty encoding */ limit;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ sharedItemCenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fetchThrottler;
    void /* unknown type, empty encoding */ sortedArticleIDs;
    void /* unknown type, empty encoding */ itemsByArticleID;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ viewContextsByArticleID;
    void /* unknown type, empty encoding */ $__lazy_storage_$_initializingPromise;
}

- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
