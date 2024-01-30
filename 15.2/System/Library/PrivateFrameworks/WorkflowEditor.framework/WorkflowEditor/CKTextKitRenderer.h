@class UIColor, CKTextKitContext, CKTextKitShadower, UITraitCollection, NSAttributedString, NSCharacterSet;
@protocol CKTextKitTruncating;

@interface CKTextKitRenderer : NSObject {
    struct CGSize { double width; double height; } _calculatedSize;
    double _verticalOffset;
}

@property (readonly, nonatomic) CKTextKitContext *context;
@property (readonly, nonatomic) id<CKTextKitTruncating> truncater;
@property (readonly, nonatomic) CKTextKitShadower *shadower;
@property (readonly, nonatomic) struct CKTextKitAttributes { NSAttributedString *attributedString; NSAttributedString *truncationAttributedString; NSCharacterSet *avoidTailTruncationSet; long long lineBreakMode; unsigned long long maximumNumberOfLines; struct CGSize { double width; double height; } shadowOffset; UIColor *shadowColor; double shadowOpacity; double shadowRadius; void /* function */ *layoutManagerFactory; } attributes;
@property (readonly, nonatomic) struct CGSize { double width; double height; } constrainedSize;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (struct CGSize { double x0; double x1; })size;
- (unsigned long long)lineCount;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_calculateSize;
- (id)initWithTextKitAttributes:(const struct CKTextKitAttributes { id x0; id x1; id x2; long long x3; unsigned long long x4; struct CGSize { double x0; double x1; } x5; id x6; double x7; double x8; void /* function */ *x9; } *)a0 constrainedSize:(struct CGSize { double x0; double x1; })a1;
- (void)drawInContext:(struct CGContext { } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)rectsForTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 measureOption:(unsigned long long)a1;
- (unsigned long long)nearestTextIndexAtPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)textCheckingResultAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_internalRectForGlyphAtIndex:(unsigned long long)a0 measureOption:(unsigned long long)a1 layoutManager:(id)a2 textContainer:(id)a3 textStorage:(id)a4;
- (void)enumerateTextIndexesAtPosition:(struct CGPoint { double x0; double x1; })a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trailingRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct vector<_NSRange, std::allocator<_NSRange>> { struct _NSRange *x0; struct _NSRange *x1; struct __compressed_pair<_NSRange *, std::allocator<_NSRange>> { struct _NSRange *x0; } x2; })visibleRanges;

@end
