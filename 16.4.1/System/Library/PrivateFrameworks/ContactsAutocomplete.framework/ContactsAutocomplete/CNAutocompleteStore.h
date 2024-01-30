@class CNAutocompleteStoreQueryHelper, CNAutocompleteUserSession, CNAutocompleteStoreReproStringRecorder, CNCancelationToken;
@protocol CNAutocompleteProbeProvider, CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteStore : NSObject

@property (readonly, nonatomic) CNAutocompleteStoreQueryHelper *queryHelper;
@property (weak, nonatomic) CNCancelationToken *currentFetchToken;
@property (retain, nonatomic) CNAutocompleteUserSession *userSession;
@property (retain, nonatomic) CNAutocompleteStoreReproStringRecorder *reproStringRecorder;
@property (readonly, nonatomic) id<CNAutocompleteProbeProvider> probeProvider;
@property (readonly, nonatomic) id<CNAutocompleteSearchProvider> searchProvider;
@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (nonatomic) double fetchCoalescingInterval;

+ (double)defaultFetchCoalescingInterval;

- (id)initWithDelegate:(id)a0;
- (id)executeFetchRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)executeFetchRequest:(id)a0 delegate:(id)a1;
- (id)scheduleFetchRequest:(id)a0;
- (void)ignoreResult:(id)a0 completionHandler:(id /* block */)a1;
- (id)scheduleFetchRequest:(id)a0 delegate:(id)a1;
- (void)userSelectedResult:(id)a0 atSortedIndex:(unsigned long long)a1;
- (id)executeFetchRequest:(id)a0 afterDelay:(double)a1 delegate:(id)a2;
- (id)initWithDelegate:(id)a0 searchProvider:(id)a1 probeProvider:(id)a2 scheduler:(id)a3;

@end
