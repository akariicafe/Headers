@class AXMSemanticTextFactory;

@interface AXMTextLayoutManager : NSObject

@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory;

- (void).cxx_destruct;
- (id)documentWithTextItems:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1 preferredLocales:(id)a2 applySemanticAnalysis:(BOOL)a3 error:(id *)a4;
- (id)initWithSemanticTextFactory:(id)a0;
- (id)_assembleLayoutSequences:(id)a0 canvasSize:(struct CGSize { double x0; double x1; })a1;
- (id)_assembleLayoutLines:(id)a0;
- (id)_assembleLayoutRegions:(id)a0;

@end
