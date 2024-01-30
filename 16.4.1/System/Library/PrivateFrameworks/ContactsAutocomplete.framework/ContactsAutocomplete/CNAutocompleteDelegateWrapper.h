@class CNAutocompleteQueryResponsePreparer, NSString, CNAutocompleteUserSession, CNAutocompleteFetchRequest, CNCancelationToken;
@protocol CNAutocompleteFetchDelegate, CNScheduler;

@interface CNAutocompleteDelegateWrapper : NSObject <CNAutocompleteFetchDelegate, CNCancelable>

@property (readonly, nonatomic) id<CNAutocompleteFetchDelegate> delegate;
@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly, nonatomic) CNAutocompleteQueryResponsePreparer *responsePreparer;
@property (nonatomic) unsigned long long openNetworkActivityCalls;
@property (readonly, nonatomic) CNCancelationToken *cancelationToken;
@property (readonly, nonatomic) CNAutocompleteUserSession *userSession;
@property (readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseScheduler;

- (void)cancel;
- (void).cxx_destruct;
- (void)autocompleteFetch:(id)a0 didFailWithError:(id)a1;
- (void)autocompleteFetch:(id)a0 didReceiveResults:(id)a1;
- (BOOL)autocompleteFetch:(id)a0 shouldExpectSupplementalResultsForRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)a0;
- (void)autocompleteFetchDidEndNetworkActivity:(id)a0;
- (void)autocompleteFetchDidFinish:(id)a0;
- (id)sortResults;
- (id)addDiagnosticLog:(id /* block */)a0;
- (id)askDelegateToAdjustResults;
- (id)initWithDelegate:(id)a0 userSession:(id)a1 fetchRequest:(id)a2;
- (id)initWithDelegate:(id)a0 userSession:(id)a1 fetchRequest:(id)a2 scheduler:(id)a3;
- (void)queueDidEndNetworkActivityMessageForFetch:(id)a0;
- (void)queueMessageToDelegate:(id /* block */)a0;
- (void)queueUncancelableMessageToDelegate:(id /* block */)a0;
- (void)setPredictionResultsFuture:(id)a0;
- (id)suppressResultsWithAddresses:(id)a0;

@end
