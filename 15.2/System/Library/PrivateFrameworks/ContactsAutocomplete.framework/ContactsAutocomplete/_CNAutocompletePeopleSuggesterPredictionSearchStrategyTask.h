@class CNContactStore, _PSPredictionContext, NSArray, CNAutocompleteFetchRequest;

@interface _CNAutocompletePeopleSuggesterPredictionSearchStrategyTask : CNTask {
    CNAutocompleteFetchRequest *_request;
    CNContactStore *_contactStore;
    _PSPredictionContext *_context;
    NSArray *_psResults;
    NSArray *_results;
}

+ (long long)_addressTypeFromHandle:(id)a0;

- (id)run:(id *)a0;
- (void).cxx_destruct;
- (void)convertResults;
- (id)initWithRequest:(id)a0 contactStore:(id)a1;
- (void)prepareQuery;
- (void)runQuery;
- (id)_identifierForGroupResultSuggestion:(id)a0;

@end
