@class NSString, _CNAutocompleteObservableBuilderBatchingHelper;

@interface _CNAutocompleteStandardObservableBuilderBatchingHelper : NSObject <CNAutocompleteObservableBuilderBatchingHelper>

@property (retain, nonatomic) _CNAutocompleteObservableBuilderBatchingHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addCachedCalendarServerObservable:(id)a0;
- (void)addCachedDirectoryServerObservable:(id)a0;
- (void)addCalendarServerObservable:(id)a0;
- (void)addContactsObservable:(id)a0;
- (void)addCoreRecentsObservable:(id)a0;
- (void)addDirectoryServerObservable:(id)a0;
- (void)addLocalExtensionObservable:(id)a0;
- (void)addPredictionObservable:(id)a0;
- (void)addStewieObservable:(id)a0;
- (void)addSuggestionsObservable:(id)a0;
- (void)addSupplementalObservable:(id)a0;
- (BOOL)batchAtIndexIncludesServer:(unsigned long long)a0;
- (id)batchedObservables;

@end
