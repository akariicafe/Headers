@class NSString, NSArray, NSMutableIndexSet;

@interface _CNForkJoinProgressiveResultObservationStrategy : NSObject <CNForkJoinResultReportingStrategy> {
    NSArray *_results;
    unsigned long long _activeObservableIdx;
    NSMutableIndexSet *_finishedObservables;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
