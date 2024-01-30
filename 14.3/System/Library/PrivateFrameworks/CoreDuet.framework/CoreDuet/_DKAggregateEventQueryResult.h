@class _DKEventQuery, NSMutableArray;

@interface _DKAggregateEventQueryResult : NSObject {
    _DKEventQuery *_query;
    NSMutableArray *_mutableEvents;
    NSMutableArray *_mutableErrors;
    unsigned long long _numberOfContributions;
}

- (void).cxx_destruct;

@end
