@interface CHPostprocessingStep : NSObject

+ (id)applyTransform:(id /* block */)a0 toAllTokens:(id)a1;

- (id)process:(id)a0;

@end
