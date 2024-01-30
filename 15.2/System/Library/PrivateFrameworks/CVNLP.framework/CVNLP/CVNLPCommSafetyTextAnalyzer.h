@class NSArray;

@interface CVNLPCommSafetyTextAnalyzer : CVNLPModelBase {
    NSArray *_models;
}

- (void).cxx_destruct;
- (id)processText:(id)a0 inConversationWithIdentifier:(id)a1 date:(id)a2 error:(id *)a3;
- (void)processConversationsWithStartDate:(id)a0 endDate:(id)a1 previousClassifications:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (long long)_classifyString:(id)a0;
- (id)processText:(id)a0 inConversationWithIdentifier:(id)a1 startDate:(id)a2 endDate:(id)a3 error:(id *)a4;
- (long long)classifyString:(id)a0;
- (id)_classificationForTextItems:(id)a0 conversationIdentifier:(id)a1;
- (id)_classificationsForTextItems:(id)a0 previousClassifications:(id)a1;
- (id)initWithModelURL:(id)a0 options:(id)a1;

@end
