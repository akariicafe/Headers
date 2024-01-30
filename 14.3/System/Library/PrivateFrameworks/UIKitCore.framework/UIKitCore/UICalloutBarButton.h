@class UITextReplacement, NSDate;

@interface UICalloutBarButton : UIButton {
    int m_position;
    BOOL m_isText;
    BOOL m_configured;
    BOOL m_single;
    BOOL m_padLeft;
    BOOL m_padRight;
    NSDate *m_appearanceDate;
}

@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) double contentWidth;
@property (readonly, nonatomic) double contentScale;
@property (readonly, nonatomic) double additionalContentHeight;
@property (readonly, nonatomic) int type;
@property (nonatomic) BOOL forceFlash;
@property (nonatomic) long long page;
@property (nonatomic) double dividerOffset;
@property (nonatomic) double imageVerticalAdjust;
@property (nonatomic) BOOL dontDismiss;
@property (retain, nonatomic) UITextReplacement *textReplacement;

+ (id)buttonWithTitle:(id)a0 subtitle:(id)a1 maxWidth:(double)a2 action:(SEL)a3 type:(int)a4 inView:(id)a5;
+ (id)buttonWithTitle:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3;
+ (id)buttonWithImage:(id)a0 action:(SEL)a1 type:(int)a2 inView:(id)a3;
+ (BOOL)_cursorInteractionEnabled;

- (id)cursorInteraction:(id)a0 regionForLocation:(struct CGPoint { double x0; double x1; })a1 defaultRegion:(id)a2;
- (void)flash;
- (id)cursorInteraction:(id)a0 styleForRegion:(id)a1 modifiers:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)cursorInteraction:(id)a0 willExitRegion:(id)a1 withAnimator:(id)a2;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)cursorInteraction:(id)a0 willEnterRegion:(id)a1 withAnimator:(id)a2;
- (void)touchDown;
- (void)configureLabel;
- (void)cancelFlash;
- (void)setupWithTitle:(id)a0 action:(SEL)a1 type:(int)a2;
- (void)setupWithTitle:(id)a0 subtitle:(id)a1 maxWidth:(double)a2 action:(SEL)a3 type:(int)a4;
- (void)setupWithImage:(id)a0 action:(SEL)a1 type:(int)a2;
- (void)_commonSetupWithAction:(SEL)a0 type:(int)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustRectForPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleRect:(BOOL)a1;
- (void)fadeAndSendAction;
- (void)configureForLeftPosition:(int)a0;
- (void)configureForSingle:(int)a0;
- (void)configureForMiddlePosition;
- (void)configureForRightPosition:(int)a0;
- (void)layoutSubviews;
- (void)setContentScale:(double)a0;
- (double)_scaleFactorForImage;
- (void)setHighlighted:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
