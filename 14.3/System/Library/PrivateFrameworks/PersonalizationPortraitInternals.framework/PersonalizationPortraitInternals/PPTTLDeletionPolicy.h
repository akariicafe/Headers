@class NSArray, PPLocalLocationStore, PPLocalTopicStore, PPLocalNamedEntityStore;

@interface PPTTLDeletionPolicy : NSObject {
    NSArray *_rules;
    PPLocalNamedEntityStore *_namedEntityStore;
    PPLocalTopicStore *_topicStore;
    PPLocalLocationStore *_locationStore;
}

+ (id)defaultPolicy;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithRules:(id)a0 namedEntityStore:(id)a1 topicStore:(id)a2 locationStore:(id)a3;
- (BOOL)applyPolicyWithError:(id *)a0 shouldContinueBlock:(id /* block */)a1;
- (BOOL)_deleteAllNamedEntitiesExceedingMaxAgeSeconds:(double)a0 error:(id *)a1;
- (BOOL)_deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 maxAgeSeconds:(double)a2 error:(id *)a3;
- (BOOL)_deleteAllTopicsExceedingMaxAgeSeconds:(double)a0 error:(id *)a1;
- (BOOL)_deleteAllTopicsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 maxAgeSeconds:(double)a2 error:(id *)a3;
- (BOOL)_deleteAllLocationsExceedingMaxAgeSeconds:(double)a0 error:(id *)a1;
- (BOOL)_deleteAllLocationsFromSourcesWithBundleId:(id)a0 groupId:(id)a1 maxAgeSeconds:(double)a2 error:(id *)a3;

@end
