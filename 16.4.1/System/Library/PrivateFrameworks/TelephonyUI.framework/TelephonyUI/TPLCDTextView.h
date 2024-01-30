@class UIFont, NSString, UIColor, TPLCDTextViewScrollingView, UIFrameAnimation;

@interface TPLCDTextView : UIView {
    NSString *_text;
    UIFont *_font;
    UIColor *_shadowColor;
    UIColor *_textColor;
    TPLCDTextViewScrollingView *_scrollingView;
    double _fontSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _textRect;
    id _delegate;
    double _minFontSize;
    unsigned char _textRectIsValid : 1;
    unsigned char _centerText : 1;
    unsigned char _animates : 1;
    unsigned char _isAnimating : 1;
    unsigned char _leftTruncates : 1;
    UIFrameAnimation *_animation;
}

+ (double)defaultMinimumFontSize;

- (void)startAnimating;
- (void)setTextColor:(id)a0;
- (void)stopAnimating;
- (struct CGSize { double x0; double x1; })sizeToFit;
- (void)setFont:(id)a0;
- (void)setShadowColor:(id)a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (id)text;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_tearDownAnimation;
- (BOOL)animates;
- (void)setMinimumFontSize:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRect;
- (void)setCenterText:(BOOL)a0;
- (void)_startScrolling;
- (void)setLCDTextFont:(id)a0;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 verticallyOffset:(BOOL)a1;
- (void)_finishedScrolling;
- (void)_scheduleStartScrolling;
- (void)_setupForAnimationIfNecessary;
- (void)resetAnimation;
- (void)setAnimatesIfTruncated:(BOOL)a0;
- (void)setLeftTruncatesText:(BOOL)a0;

@end
