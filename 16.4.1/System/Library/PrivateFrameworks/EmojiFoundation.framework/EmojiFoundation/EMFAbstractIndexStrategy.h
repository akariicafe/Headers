@class NSDictionary, NSString;

@interface EMFAbstractIndexStrategy : NSObject <EMFIndexStrategy>

@property (retain, nonatomic) NSDictionary *termIndex;
@property (retain, nonatomic) NSDictionary *documentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)assertMethodNeedsConcreteImplementation:(SEL)a0;
- (id)calculateDocumentWeightsForQueryTokenCounts:(id)a0;
- (id)commonDocumentsForTerms:(id)a0;
- (id)initWithTermIndex:(id)a0 andDocumentIndex:(id)a1;
- (id)postingsForTerm:(id)a0;
- (id)termWeightForTerm:(id)a0 inDocument:(id)a1;
- (id)termsForDocument:(id)a0;

@end
