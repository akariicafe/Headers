@class NSPredicate, NSObject;
@protocol OS_dispatch_queue;

@interface _DRTopicEnumerationQuery : _DKQuery <_DKExecutableQuery> {
    NSObject<OS_dispatch_queue> *_defaultQueue;
}

@property (retain) NSPredicate *predicate;
@property unsigned long long limit;
@property (copy) id /* block */ topicEnumerator;

+ (id)topicEnumerationQueryWithPredicate:(id)a0 topicEnumerator:(id /* block */)a1;
+ (id)enumerationSumExpression;
+ (id)enumerationCountExpresion;

- (id)initWithPredicate:(id)a0 topicEnumerator:(id /* block */)a1;
- (id)handleResults:(id)a0 error:(id)a1;
- (id)executeUsingCoreDataStorage:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
