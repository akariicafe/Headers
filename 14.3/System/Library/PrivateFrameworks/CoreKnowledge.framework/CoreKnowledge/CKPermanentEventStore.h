@class CKKnowledgeStore;

@interface CKPermanentEventStore : NSObject <CKPermanentWritableEventStore, CKPermanentReadableEventStore, CKPermanentEventStorePrivate> {
    void /* unknown type, empty encoding */ knowledgeStore;
}

@property (nonatomic, readonly) CKKnowledgeStore *backingStore;

+ (id)defaultStore;
+ (id)createEventWithIdentifier:(id)a0 dateInterval:(id)a1 metadata:(id)a2 fromEvent:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKnowledgeStore:(id)a0;
- (BOOL)deleteInteractionsWithBundleId:(id)a0 error:(id *)a1;
- (void)historicEventWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteInteractionsWithBundleId:(id)a0 completionHandler:(id /* block */)a1;
- (void)recordEvent:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)recordInteraction:(id)a0 bundleId:(id)a1 error:(id *)a2;
- (void)recordInteraction:(id)a0 bundleId:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)recordEvent:(id)a0 error:(id *)a1;
- (BOOL)recordInteraction:(id)a0 error:(id *)a1;
- (void)recordInteraction:(id)a0 completionHandler:(id /* block */)a1;
- (void)historicEventsWithSourceBundleIdentifier:(id)a0 andIntent:(id)a1 completionHandler:(id /* block */)a2;
- (void)historicEventsWithCompletionHandler:(id /* block */)a0;
- (id)historicEventsAndReturnError:(id *)a0;
- (void)setFirstSeen:(id)a0 forEventWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setLastSeen:(id)a0 forEventWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setFrequency:(long long)a0 forEventWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setLastDuration:(double)a0 forEventWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setTotalDuration:(double)a0 forEventWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)deleteEventWithIdentifier:(id)a0 error:(id *)a1;
- (void)deleteEventWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
