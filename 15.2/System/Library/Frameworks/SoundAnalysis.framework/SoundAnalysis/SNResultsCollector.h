@class NSArray, NSString, NSMutableArray;

@interface SNResultsCollector : NSObject <SNResultsObserving> {
    NSMutableArray *_results;
    NSMutableArray *_errors;
}

@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSArray *errors;
@property (readonly, nonatomic) long long completeCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)clearResults;
- (void).cxx_destruct;
- (id)init;
- (void)clearErrors;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (void)clearCompleteCount;

@end
