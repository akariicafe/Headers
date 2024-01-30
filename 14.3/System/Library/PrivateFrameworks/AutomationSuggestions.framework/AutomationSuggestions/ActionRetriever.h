@class NSMutableDictionary;
@protocol _DKKnowledgeQuerying;

@interface ActionRetriever : NSObject

@property (retain, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain, nonatomic) NSMutableDictionary *intentCache;
@property (retain, nonatomic) NSMutableDictionary *activityCache;

- (id)init;
- (void).cxx_destruct;
- (id)queryForIntentsWithBundleId:(id)a0 offset:(unsigned long long)a1 limit:(unsigned long long)a2;
- (id)queryForActivitiesWithBundleId:(id)a0 activityType:(id)a1;
- (id)retrieveIntentEventForItem:(id)a0;
- (id)retrieveActivityEventForItem:(id)a0;

@end
