@class PPNamedEntityStore, PPTopicStore;

@interface PPNamedEntityBackfiller : NSObject {
    PPNamedEntityStore *_namedEntityStore;
    PPTopicStore *_topicStore;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithNamedEntityStore:(id)a0 topicStore:(id)a1;
- (BOOL)backfillEntityMappingAndDonationWithShouldContinueBlock:(id /* block */)a0;

@end
