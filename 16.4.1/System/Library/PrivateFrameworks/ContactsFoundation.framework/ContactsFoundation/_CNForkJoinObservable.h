@class NSArray;
@protocol CNForkJoinResultReportingStrategy;

@interface _CNForkJoinObservable : CNObservable {
    NSArray *_observables;
    id<CNForkJoinResultReportingStrategy> _resultReportingStrategy;
}

+ (id)forkJoin:(id)a0;
+ (id)progressiveForkJoin:(id)a0;

- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservables:(id)a0 reportingStrategy:(id)a1;

@end
