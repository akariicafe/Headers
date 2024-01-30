@class NSOperationQueue, NSDictionary;

@interface MPStoreContentReporter : NSObject {
    NSOperationQueue *_operationQueue;
    NSDictionary *_reportConcernBagDictionary;
}

@property (class, readonly, nonatomic) MPStoreContentReporter *sharedReporter;

- (id)init;
- (void).cxx_destruct;
- (void)_performWithBag:(id /* block */)a0;
- (id)_reportConcernBagDictionary;
- (void)submitReport:(id)a0 completion:(id /* block */)a1;
- (id)_dictionariesForType:(long long)a0;
- (void)deleteComment:(id)a0 activityID:(id)a1 completion:(id /* block */)a2;
- (void)deletePost:(id)a0 completion:(id /* block */)a1;
- (id)baseURLStringForReport;
- (id)reportsForType:(long long)a0 contentID:(id)a1 aucType:(id)a2 commentText:(id)a3;
- (id)_deleteCommentURLComponentsFromBag:(id)a0;
- (id)_deletePostURLComponentsFromBag:(id)a0;

@end
