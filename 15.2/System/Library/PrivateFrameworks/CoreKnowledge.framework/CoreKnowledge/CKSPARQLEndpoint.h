@class CKKnowledgeStore;

@interface CKSPARQLEndpoint : NSObject {
    CKKnowledgeStore *_knowledgeStore;
}

- (id)initWithKnowledgeStore:(id)a0;
- (void).cxx_destruct;
- (void)importTriplesFromFileAtPath:(id)a0;
- (id)sparqlResultsForQuery:(id)a0 error:(id *)a1;

@end
