@class NSPredicate;

@interface SNPredicateFilterOperator : NSObject <SNOperator> {
    long long _leakRemaining;
    NSPredicate *_predicate;
    long long _leakCount;
}

- (id)init;
- (void).cxx_destruct;
- (void)processInput:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;
- (void)processTerminationWithOptionalError:(id)a0 portID:(id)a1 downstreamHandler:(id /* block */)a2;

@end
