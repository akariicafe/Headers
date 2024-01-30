@class NSString;
@protocol CNAutocompleteFetchDelegate;

@interface _CNAutocompleteFetchDelegateSafeWrapper : NSObject <CNAutocompleteFetchDelegate> {
    id<CNAutocompleteFetchDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (BOOL)autocompleteFetch:(id)a0 shouldExpectSupplementalResultsForRequest:(id)a1 completionHandler:(id /* block */)a2;
- (id)autocompleteFetch:(id)a0 willAdjustResults:(id)a1;
- (void)autocompleteFetch:(id)a0 willSortResults:(id)a1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)a0;
- (void)autocompleteFetchDidEndNetworkActivity:(id)a0;
- (void)autocompleteFetchDidFinish:(id)a0;
- (id /* block */)resultComparatorForAutocompleteFetch:(id)a0;

@end
