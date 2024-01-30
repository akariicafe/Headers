@class NSString, _CNAutocompleteObservableBuilderBatchingHelper;

@interface _CNAutocompleteStandardObservableBuilderBatchingHelper : NSObject <CNAutocompleteObservableBuilderBatchingHelper>

@property (retain, nonatomic) _CNAutocompleteObservableBuilderBatchingHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)batchAtIndexIncludesServer:(unsigned long long)a0;
- (id)batchedObservables;
- (void)addContactsObservable:(id)a0;
- (void)addCoreRecentsObservable:(id)a0;
- (void)addSuggestionsObservable:(id)a0;
- (void)addLocalExtensionObservable:(id)a0;
- (void)addDuetObservable:(id)a0;
- (void)addSupplementalObservable:(id)a0;
- (void)addCachedDirectoryServerObservable:(id)a0;
- (void)addDirectoryServerObservable:(id)a0;
- (void)addCachedCalendarServerObservable:(id)a0;
- (void)addCalendarServerObservable:(id)a0;

@end
