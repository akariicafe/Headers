@class NSString, CNAutocompleteFetchRequest, NSObject;
@protocol OS_os_log, CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteSearchObservableProvider : NSObject <CNAutocompleteSearchObservableProvider>

@property (readonly, nonatomic) id<CNAutocompleteSearchProvider> searchProvider;
@property (readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest;
@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithSearchProvider:(id)a0 fetchRequest:(id)a1 scheduler:(id)a2;

- (void).cxx_destruct;
- (id)calendarServersSearchObservable;
- (id)localExtensionSearchObservables;
- (id)directoryServersSearchObservable;
- (id)initWithSearchProvider:(id)a0 fetchRequest:(id)a1 scheduler:(id)a2;
- (id)localSearchObservable;
- (id)observableWithWrappedSearchProviderGetter:(id /* block */)a0 name:(id)a1;
- (id)predictionsSearchObservableWithUnfilteredResultPromise:(id)a0;
- (id)recentsSearchObservable;
- (BOOL)shouldAllowPredictionSearchToSourceResults;
- (id)stewieSearchObservable;
- (id)suggestionsSearchObservable;

@end
