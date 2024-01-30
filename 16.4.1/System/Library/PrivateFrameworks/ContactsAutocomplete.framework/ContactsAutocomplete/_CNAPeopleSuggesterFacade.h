@class NSString, _PSSuggester;

@interface _CNAPeopleSuggesterFacade : NSObject <CNAPeopleSuggesterFacade>

@property (readonly) _PSSuggester *suggester;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)autocompleteSearchResultsWithPredictionContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPeopleSuggester:(id)a0;

@end
