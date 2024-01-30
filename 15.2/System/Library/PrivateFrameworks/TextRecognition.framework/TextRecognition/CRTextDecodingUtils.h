@interface CRTextDecodingUtils : NSObject

+ (void)getBoundariesForRanges:(id)a0 topPoints:(id *)a1 bottomPoints:(id *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scale:(float)a4 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 rotatedRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 radians:(float)a7 model:(id)a8 configuration:(id)a9 paddingLeft:(int)a10 paddingRight:(int)a11;
+ (id)tokenFilterPredicateFalsePositiveFiltering:(BOOL)a0;
+ (void)getWordBoundariesForWhiteSpaceRanges:(id)a0 topPoints:(id *)a1 bottomPoints:(id *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scale:(float)a4 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 rotatedRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 radians:(float)a7 model:(id)a8 configuration:(id)a9;
+ (void)getCharacterBoundariesForActivationRanges:(id)a0 topPoints:(id *)a1 bottomPoints:(id *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scale:(float)a4 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 rotatedRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 radians:(float)a7 model:(id)a8 configuration:(id)a9;
+ (BOOL)validateProbability:(id)a0 precisionThreshold:(double)a1 withLM:(BOOL)a2;
+ (id)whitespaceRangesForTokens:(id)a0 outputTokenString:(id *)a1 falsePositiveFiltering:(BOOL)a2;
+ (id)characterRangesForTokens:(id)a0 fromActivation:(id)a1 falsePositiveFiltering:(BOOL)a2;

@end
