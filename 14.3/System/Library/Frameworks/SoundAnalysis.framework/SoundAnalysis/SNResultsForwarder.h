@class NSString;

@interface SNResultsForwarder : NSObject <SNResultsObserving> {
    id /* block */ _resultsHandler;
    id /* block */ _completionHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (id)initWithCompletionHandler:(id /* block */)a0 resultsHandler:(id /* block */)a1;

@end
