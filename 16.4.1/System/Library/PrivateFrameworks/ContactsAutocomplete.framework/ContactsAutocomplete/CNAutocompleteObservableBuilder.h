@class NSString;
@protocol CNAutocompleteObservableBuilderBatchingHelper, CNAutocompleteProbeProvider, CNScheduler;

@interface CNAutocompleteObservableBuilder : NSObject <CNAutocompleteObservableBuilder>

@property (readonly, nonatomic) id<CNAutocompleteObservableBuilderBatchingHelper> batchingHelper;
@property (readonly, nonatomic) id<CNAutocompleteProbeProvider> probeProvider;
@property (nonatomic) double networkActivityStartDelay;
@property (nonatomic) BOOL supplementalResultsUseNetwork;
@property (copy, nonatomic) id /* block */ networkActivityDidStartHandler;
@property (copy, nonatomic) id /* block */ networkActivityDidStopHandler;
@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)builderWithSearchType:(unsigned long long)a0 scheduler:(id)a1 probeProvider:(id)a2;
+ (BOOL)supplementalResultsUseNetwork:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)addCachedCalendarServerObservable:(id)a0;
- (void)addCachedDirectoryServerObservable:(id)a0;
- (void)addCalendarServerObservable:(id)a0;
- (void)addContactsObservable:(id)a0;
- (void)addCoreRecentsObservable:(id)a0;
- (void)addDirectoryServerObservable:(id)a0;
- (void)addLocalExtensionObservable:(id)a0;
- (void)addPredictionObservable:(id)a0 doOnTimeout:(id /* block */)a1;
- (void)addStewieObservable:(id)a0;
- (void)addSuggestionsObservable:(id)a0;
- (void)addSupplementalObservable:(id)a0;
- (id)combineObservablesInBatch:(id)a0 scheduler:(id)a1;
- (id)initWithBatchingHelper:(id)a0 probeProvider:(id)a1 scheduler:(id)a2;
- (id)makeObservable;
- (id)probeObservable:(id)a0 forPerformanceWithBlock:(id /* block */)a1;

@end
