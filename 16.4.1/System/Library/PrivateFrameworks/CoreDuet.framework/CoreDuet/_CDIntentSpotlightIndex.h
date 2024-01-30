@class _DKKnowledgeStorage, NSObject, _CDSpotlightEventIndexer;
@protocol OS_dispatch_queue;

@interface _CDIntentSpotlightIndex : NSObject <_DKKnowledgeStorageEventNotificationDelegate>

@property (readonly, nonatomic) _DKKnowledgeStorage *storage;
@property (readonly, nonatomic) _CDSpotlightEventIndexer *indexer;
@property (nonatomic) double delay;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;
@property (nonatomic) BOOL includeAdditions;
@property (copy, nonatomic) id /* block */ completion;

- (void)triggerIndexIncludingAdditions:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithKnowledgeStorage:(id)a0;
- (void)dealloc;
- (void)knowledgeStorage:(id)a0 didTombstoneEventsWithStreamNameCounts:(id)a1;
- (void)knowledgeStorage:(id)a0 didInsertLocalEventsWithStreamNameCounts:(id)a1;
- (void).cxx_destruct;

@end
