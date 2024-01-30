@class NSString, PKGlyphView;
@protocol PKExpressGlyphViewDelegate;

@interface PKExpressGlyphView : UIView <PKGlyphViewDelegate> {
    int _state;
    double _maximumLength;
    PKGlyphView *_glyphView;
    id<PKExpressGlyphViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)glyphView:(id)a0 revealingCheckmark:(BOOL)a1;

@end
