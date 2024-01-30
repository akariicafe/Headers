@class NSString, CNAutocompleteFetchRequest;
@protocol CNAutocompleteSearchProvider, CNScheduler;

@interface CNAutocompleteSearchObservableProvider : NSObject <CNAutocompleteSearchObservableProvider>

@property (readonly, nonatomic) id<CNAutocompleteSearchProvider> searchProvider;
@property (readonly, nonatomic) CNAutocompleteFetchRequest *fetchRequest;
@property (readonly, nonatomic) id<CNScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithSearchProvider:(id)a0 fetchRequest:(id)a1 scheduler:(id)a2;

- (void).cxx_destruct;
- (id)initWithSearchProvider:(id)a0 fetchRequest:(id)a1 scheduler:(id)a2;
- (id)observableWithWrappedSearchProviderGetter:(id /* block */)a0 name:(id)a1;
- (BOOL)shouldAllowPredictionSearchToSourceResults;
- (id)localSearchObservable;
- (id)recentsSearchObservable;
- (id)suggestionsSearchObservable;
- (id)predictionsSearchObservableWithUnfilteredResultPromise:(id)a0;
- (id)localExtensionSearchObservables;
- (id)directoryServersSearchObservable;
- (id)calendarServersSearchObservable;

@end
