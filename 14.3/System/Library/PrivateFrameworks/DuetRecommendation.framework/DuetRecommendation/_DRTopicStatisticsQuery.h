@class _DRTopicInterestSummary, NSPredicate, NSObject;
@protocol OS_dispatch_queue;

@interface _DRTopicStatisticsQuery : _DKQuery <_DKExecutableQuery> {
    NSObject<OS_dispatch_queue> *_defaultQueue;
    NSPredicate *_predicate;
}

@property (retain) _DRTopicInterestSummary *summary;

+ (id)topicStatisticsQueryWithFilter:(id)a0;
+ (id)sumExpression;
+ (id)countExpression;
+ (id)topicStatisticsQuery;

- (id)handleResults:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)executeUsingCoreDataStorage:(id)a0 error:(id *)a1;
- (id)initWithPredicate:(id)a0;
- (void)clearSummary;

@end
