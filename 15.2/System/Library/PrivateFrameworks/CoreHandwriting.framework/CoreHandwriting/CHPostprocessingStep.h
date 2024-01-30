@interface CHPostprocessingStep : NSObject

+ (id)applyTransform:(id /* block */)a0 toAllTokens:(id)a1;
+ (void)expandPathsWithCorrectedTokens:(id)a0 fromTokens:(id)a1 correctedTokenPath:(id)a2 originalTokenPath:(id)a3;

- (id)process:(id)a0;

@end
