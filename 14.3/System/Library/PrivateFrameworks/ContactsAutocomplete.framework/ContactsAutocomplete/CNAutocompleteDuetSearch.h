@class CNContactStore, NSString;

@interface CNAutocompleteDuetSearch : NSObject <CNAutocompleteSearch>

@property (readonly, nonatomic) id /* block */ peopleSuggesterFactory;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configureContext:(id)a0 withFetchRequest:(id)a1;
+ (void)configureSettings:(id)a0 withFetchRequest:(id)a1;
+ (id)constrainMechanismsForSearchType:(unsigned long long)a0;
+ (unsigned long long)predictedResultLimit;

- (id)init;
- (void).cxx_destruct;
- (id)peopleSuggester;
- (id)initWithPeopleSuggesterFactory:(id /* block */)a0;
- (id)initWithPeopleSuggesterFactory:(id /* block */)a0 contactStore:(id)a1;
- (id)suggesterContextForFetchRequest:(id)a0;
- (id)suggesterSettingsForFetchRequest:(id)a0;
- (id)querySuggester:(id)a0 withContext:(id)a1 settings:(id)a2;
- (id)autocompleteResultsFromSuggesterResults:(id)a0 factory:(id)a1;
- (id)resultValueForCDContact:(id)a0;
- (long long)addressTypeForCDContact:(id)a0;
- (id)executeRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
