@class SPSearchSuggestionResult, PARTask, PARSession;

@interface PRSCoreParsecQueryTask : PRSQueryTask {
    PARSession *_parSession;
    BOOL _parsecEnabled;
}

@property (retain, nonatomic) SPSearchSuggestionResult *suggestionResult;
@property (retain) PARTask *task;

- (void).cxx_destruct;
- (void)resume;
- (void)setParsecState:(BOOL)a0;
- (void)handleResults:(id)a0;
- (BOOL)needsBag;
- (id)initWithSession:(id)a0 parsecSession:(id)a1 handler:(id)a2 queue:(id)a3 queryContext:(id)a4 queryIdent:(unsigned long long)a5;

@end
