@class NSString, NSMutableArray;

@interface _CNForkJoinWhenCompleteResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy> {
    NSMutableArray *_results;
    unsigned long long _uncompletedObservableCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
