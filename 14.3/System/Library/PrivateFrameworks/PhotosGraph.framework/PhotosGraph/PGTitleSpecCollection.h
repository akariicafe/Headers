@class NSArray;

@interface PGTitleSpecCollection : NSObject

@property (readonly, nonatomic) NSArray *specPools;

+ (id)collectionWithSpecPools:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSpecPools:(id)a0;
- (id)allPossibleTitlesWithMomentNodes:(id)a0;
- (id)allPossibleTitlesWithHighlightMomentNodes:(id)a0;
- (id)_allPossibleTitlesWithMomentNodes:(id)a0 forHighlight:(BOOL)a1;

@end
