@class NSArray;

@interface PGTitleSpecCollection : NSObject

@property (readonly, nonatomic) NSArray *specPools;

+ (id)collectionWithSpecPools:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_allPossibleTitlesWithMomentNodes:(id)a0 forHighlight:(BOOL)a1 argumentEvaluationContext:(id)a2;
- (id)allPossibleTitlesWithHighlightMomentNodes:(id)a0 argumentEvaluationContext:(id)a1;
- (id)allPossibleTitlesWithMomentNodes:(id)a0 argumentEvaluationContext:(id)a1;
- (id)initWithSpecPools:(id)a0;

@end
