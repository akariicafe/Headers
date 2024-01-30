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

- (id)initWithPredicate:(id)a0;
- (id)handleResults:(id)a0 error:(id)a1;
- (id)executeUsingCoreDataStorage:(id)a0 error:(id *)a1;
- (void)clearSummary;
- (void).cxx_destruct;

@end
