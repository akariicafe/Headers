@class NSDictionary, NSURL, NSBundle;
@protocol EMFIndexStrategy;

@interface EMFInvertedIndex : NSObject

@property (retain, nonatomic) NSDictionary *termIndex;
@property (retain, nonatomic) NSDictionary *documentIndex;
@property (retain, nonatomic) NSURL *termIndexURL;
@property (retain, nonatomic) NSURL *documentIndexURL;
@property (retain, nonatomic) NSBundle *assetBundle;
@property (retain, nonatomic) id<EMFIndexStrategy> strategy;

- (void).cxx_destruct;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)a0;
- (id)commonDocumentsForTerms:(id)a0;
- (id)initWithTermIndex:(id)a0 andDocumentIndex:(id)a1;
- (id)postingsForTerm:(id)a0;
- (id)termWeightForTerm:(id)a0 inDocument:(id)a1;
- (id)termsForDocument:(id)a0;

@end
