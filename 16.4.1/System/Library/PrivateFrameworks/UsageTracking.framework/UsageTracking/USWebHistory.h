@protocol _DKKnowledgeEventStreamDeleting;

@interface USWebHistory : NSObject

@property (readonly) BOOL usageTrusted;
@property (readonly) id<_DKKnowledgeEventStreamDeleting> eventStorage;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)_deleteEventsWithPredicate:(id)a0 completionHandler:(id /* block */)a1;
- (void)_deleteEventsWithWebUsagePredicate:(id)a0 videoUsagePredicate:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteAllHistoryForApplication:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteHistoryDuringInterval:(id)a0 webApplication:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteHistoryForDomain:(id)a0 webApplication:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteHistoryForURL:(id)a0 webApplication:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteHistoryForURLs:(id)a0 webApplication:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithEventStorage:(id)a0 usageTrusted:(BOOL)a1;

@end
