@class EMFQueryResultOverrideList, EMFInvertedIndex;

@interface EMFQueryEvaluator : NSObject

@property (readonly, nonatomic) EMFInvertedIndex *index;
@property (retain, nonatomic) EMFQueryResultOverrideList *overrideList;

- (void).cxx_destruct;
- (id)initWithIndex:(id)a0;
- (id)performQuery:(id)a0;
- (id)initWithIndex:(id)a0 andOverrideList:(id)a1;
- (id)_overriddenResultsForQuery:(id)a0;

@end
