@class CKKnowledgeStore;

@interface CKSPARQLEndpoint : NSObject {
    CKKnowledgeStore *_knowledgeStore;
}

- (void).cxx_destruct;
- (id)initWithKnowledgeStore:(id)a0;
- (id)sparqlResultsForQuery:(id)a0 error:(id *)a1;
- (void)importTriplesFromFileAtPath:(id)a0;

@end
