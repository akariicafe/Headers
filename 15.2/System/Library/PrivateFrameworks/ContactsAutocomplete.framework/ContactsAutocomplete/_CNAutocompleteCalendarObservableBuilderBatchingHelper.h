@class NSString, _CNAutocompleteObservableBuilderBatchingHelper;

@interface _CNAutocompleteCalendarObservableBuilderBatchingHelper : NSObject <CNAutocompleteObservableBuilderBatchingHelper>

@property (retain, nonatomic) _CNAutocompleteObservableBuilderBatchingHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)batchedObservables;
- (void)addContactsObservable:(id)a0;
- (void)addCoreRecentsObservable:(id)a0;
- (void)addSuggestionsObservable:(id)a0;
- (void)addLocalExtensionObservable:(id)a0;
- (void)addPredictionObservable:(id)a0;
- (void)addSupplementalObservable:(id)a0;
- (void)addCachedDirectoryServerObservable:(id)a0;
- (void)addDirectoryServerObservable:(id)a0;
- (void)addCachedCalendarServerObservable:(id)a0;
- (void)addCalendarServerObservable:(id)a0;
- (BOOL)batchAtIndexIncludesServer:(unsigned long long)a0;

@end
