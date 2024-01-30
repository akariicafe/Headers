@interface EMFIndexStrategySingleStemmedIndexOnly : EMFAbstractIndexStrategy

- (id)_calculateDocumentWeightsForQueryTokenCounts:(id)a0;
- (id)_commonDocumentsForTerms:(id)a0;
- (id)_postingsForTerm:(id)a0;
- (id)_postingsForTerms:(id)a0;
- (id)_termWeightForTerm:(id)a0 inDocument:(id)a1;
- (id)_termsForDocument:(id)a0;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)a0;
- (id)commonDocumentsForTerms:(id)a0;
- (id)postingsForTerm:(id)a0;
- (id)termWeightForTerm:(id)a0 inDocument:(id)a1;
- (id)termsForDocument:(id)a0;

@end
