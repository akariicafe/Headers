@class NSOperationQueue, NSDictionary;

@interface MPStoreContentReporter : NSObject {
    NSOperationQueue *_operationQueue;
    NSDictionary *_reportConcernBagDictionary;
}

@property (class, readonly, nonatomic) MPStoreContentReporter *sharedReporter;

- (void).cxx_destruct;
- (id)init;
- (id)_reportConcernBagDictionary;
- (void)submitReport:(id)a0 completion:(id /* block */)a1;
- (void)deletePost:(id)a0 completion:(id /* block */)a1;
- (void)deleteComment:(id)a0 activityID:(id)a1 completion:(id /* block */)a2;
- (void)_performWithBag:(id /* block */)a0;
- (id)reportsForType:(long long)a0 contentID:(id)a1 aucType:(id)a2 commentText:(id)a3;
- (id)baseURLStringForReport;
- (id)_dictionariesForType:(long long)a0;
- (id)_deleteCommentURLComponentsFromBag:(id)a0;
- (id)_deletePostURLComponentsFromBag:(id)a0;

@end
