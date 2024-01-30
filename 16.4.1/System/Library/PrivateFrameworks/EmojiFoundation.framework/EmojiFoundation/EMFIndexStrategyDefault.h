@interface EMFIndexStrategyDefault : EMFAbstractIndexStrategy

- (double)_calculateCumulativeTermWeightForQueryTokenCounts:(id)a0 inDocumentID:(id)a1;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)a0;
- (id)commonDocumentsForTerms:(id)a0;
- (id)postingsForTerm:(id)a0;
- (id)termWeightForTerm:(id)a0 inDocument:(id)a1;
- (id)termsForDocument:(id)a0;

@end
