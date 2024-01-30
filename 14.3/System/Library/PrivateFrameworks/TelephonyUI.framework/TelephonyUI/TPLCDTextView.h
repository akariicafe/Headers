@class UIFont, NSString, UIColor, TPLCDTextViewScrollingView, UIFrameAnimation;

@interface TPLCDTextView : UIView {
    NSString *_text;
    UIFont *_font;
    UIColor *_shadowColor;
    UIColor *_textColor;
    TPLCDTextViewScrollingView *_scrollingView;
    double _fontSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textRect;
    UIFrameAnimation *_animation;
    id _delegate;
    double _minFontSize;
    unsigned char _textRectIsValid : 1;
    unsigned char _centerText : 1;
    unsigned char _animates : 1;
    unsigned char _isAnimating : 1;
    unsigned char _leftTruncates : 1;
}

+ (double)defaultMinimumFontSize;

- (void)setShadowColor:(id)a0;
- (void)setMinimumFontSize:(double)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeToFit;
- (void)setTextColor:(id)a0;
- (id)text;
- (void)dealloc;
- (void)setFont:(id)a0;
- (BOOL)animates;
- (void)_tearDownAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)stopAnimating;
- (void)startAnimating;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRect;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupForAnimationIfNecessary;
- (void)setLCDTextFont:(id)a0;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 verticallyOffset:(BOOL)a1;
- (void)_startScrolling;
- (void)_scheduleStartScrolling;
- (void)_finishedScrolling;
- (void)setCenterText:(BOOL)a0;
- (void)setLeftTruncatesText:(BOOL)a0;
- (void)setAnimatesIfTruncated:(BOOL)a0;
- (void)resetAnimation;

@end
