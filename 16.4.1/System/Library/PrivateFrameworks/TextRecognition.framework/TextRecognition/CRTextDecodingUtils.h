@interface CRTextDecodingUtils : NSObject

+ (id)tokenFilterPredicateFalsePositiveFiltering:(BOOL)a0 keepWhitespaceToken:(BOOL)a1;
+ (id)characterRangesForTokens:(id)a0 fromActivation:(id)a1 falsePositiveFiltering:(BOOL)a2 usingCharacterTokens:(BOOL)a3;
+ (void)getBoundariesForRanges:(id)a0 topPoints:(id *)a1 bottomPoints:(id *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scale:(float)a4 featureImageSize:(struct CGSize { double x0; double x1; })a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 rotatedRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 radians:(float)a8 model:(id)a9 configuration:(id)a10 paddingLeft:(int)a11 paddingRight:(int)a12 rangeOffset:(long long)a13;
+ (void)getCharacterBoundariesForActivationRanges:(id)a0 topPoints:(id *)a1 bottomPoints:(id *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scale:(float)a4 featureImageSize:(struct CGSize { double x0; double x1; })a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 rotatedRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 radians:(float)a8 model:(id)a9 configuration:(id)a10;
+ (void)getWordBoundariesForWhiteSpaceRanges:(id)a0 topPoints:(id *)a1 bottomPoints:(id *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scale:(float)a4 featureImageSize:(struct CGSize { double x0; double x1; })a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 rotatedRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 radians:(float)a8 model:(id)a9 configuration:(id)a10 rangeOffset:(long long)a11;
+ (id)tokenDelimiterRangesForTokens:(id)a0 falsePositiveFiltering:(BOOL)a1 usingCharacterTokens:(BOOL)a2;
+ (id)tokenSequenceStringForTokens:(id)a0 falsePositiveFiltering:(BOOL)a1 usingCharacterTokens:(BOOL)a2;
+ (BOOL)validateProbability:(id)a0 precisionThreshold:(double)a1 withLM:(BOOL)a2;
+ (id)wordTokensFromCharacterTokens:(id)a0;

@end
