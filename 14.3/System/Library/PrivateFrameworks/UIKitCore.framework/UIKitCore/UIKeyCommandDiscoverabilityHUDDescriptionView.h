@class UIFont, NSString, UITextView, NSDictionary, NSMutableDictionary;

@interface UIKeyCommandDiscoverabilityHUDDescriptionView : UIView <NSLayoutManagerDelegate> {
    UITextView *_textView;
    NSDictionary *_textAttributes;
    NSMutableDictionary *_glyphViews;
    unsigned long long _glyphSize;
    struct CGSize { double width; double height; } _intrinsicContentSize;
}

@property (nonatomic) double spaceWidth;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutManager:(id)a0 boundingBoxForControlGlyphAtIndex:(unsigned long long)a1 forTextContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 glyphPosition:(struct CGPoint { double x0; double x1; })a4 characterIndex:(unsigned long long)a5;
- (void)layoutManager:(id)a0 didCompleteLayoutForTextContainer:(id)a1 atEnd:(BOOL)a2;
- (unsigned long long)layoutManager:(id)a0 shouldGenerateGlyphs:(const unsigned short *)a1 properties:(const long long *)a2 characterIndexes:(const unsigned long long *)a3 font:(id)a4 forGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5;
- (id)initWithText:(id)a0 font:(id)a1 lineHeight:(double)a2 lineSpacing:(double)a3 color:(id)a4 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a5;
- (long long)layoutManager:(id)a0 shouldUseAction:(long long)a1 forControlCharacterAtIndex:(unsigned long long)a2;

@end
