@class NSString;

@interface SNResultsForwarder : NSObject <SNResultsObserving> {
    id /* block */ _completionHandler;
    id /* block */ _resultsHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;

@end
