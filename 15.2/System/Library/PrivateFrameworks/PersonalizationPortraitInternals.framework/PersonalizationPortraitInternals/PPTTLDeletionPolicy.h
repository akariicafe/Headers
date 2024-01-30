@class NSArray, PPLocalLocationStore, PPLocalTopicStore, PPLocalNamedEntityStore;

@interface PPTTLDeletionPolicy : NSObject {
    NSArray *_rules;
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalTopicStore *_topicStore;
    PPLocalLocationStore *_locationStore;
}

+ (id)defaultPolicy;

- (id)description;
- (BOOL)applyPolicyWithError:(id *)a0 shouldContinueBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRules:(id)a0 namedEntityStore:(id)a1 topicStore:(id)a2 locationStore:(id)a3;

@end
