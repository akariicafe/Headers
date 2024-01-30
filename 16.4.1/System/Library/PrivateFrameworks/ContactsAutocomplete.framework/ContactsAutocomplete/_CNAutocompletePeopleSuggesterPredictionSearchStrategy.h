@class NSString, CNContactStore;

@interface _CNAutocompletePeopleSuggesterPredictionSearchStrategy : NSObject <CNAutocompletePredictionSearchStrategy> {
    CNContactStore *_contactStore;
}

@property (readonly) NSString *descriptionForLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (id)searchResultsForFetchRequest:(id)a0;

@end
