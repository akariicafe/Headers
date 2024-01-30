@class TUIDrawingView, NSString, UIImageView, UIKBRenderTraits, UILabel, NSLayoutConstraint, UIKBRenderConfig;

@interface TUILiveKeyView : UIView

@property (retain, nonatomic) UILabel *keyLabel;
@property (retain, nonatomic) UIImageView *symbolImageView;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSString *keyCap;
@property (retain, nonatomic) TUIDrawingView *backgroundMaskView;
@property (retain, nonatomic) TUIDrawingView *keyCapBackground;
@property (retain, nonatomic) TUIDrawingView *keyCapShadow;
@property (nonatomic) double fontSize;
@property (nonatomic) BOOL usesImage;
@property (nonatomic) BOOL isShift;
@property (nonatomic) BOOL isShowingHighlight;
@property (nonatomic) BOOL usesBlueBackground;
@property (retain, nonatomic) NSLayoutConstraint *horizontalContentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *verticalContentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *labelBottom;
@property (retain, nonatomic) NSLayoutConstraint *labelLeading;
@property (retain, nonatomic) NSLayoutConstraint *labelTrailing;
@property (nonatomic) long long layoutType;
@property (nonatomic) long long layoutShape;
@property (nonatomic) long long keyStyle;
@property (retain, nonatomic) UIKBRenderTraits *traits;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;

- (id)shadowColor;
- (void)layoutSubviews;
- (id)imageWithName:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })drawingInsets;
- (id)fontForLabel;
- (id)labelForKeyCap:(id)a0;
- (void)updateKeyStyle:(long long)a0;
- (id)controlKeyColor;
- (BOOL)keyIsSpaceType:(id)a0;
- (void)updateFontSize:(double)a0;
- (id)controlShadowColor;
- (id)fontForSymbolStyle:(id)a0;
- (id)highlightedControlKeyColor;
- (id)highlightedKeyCapColor;
- (id)initWithKey:(id)a0 renderTraits:(id)a1 displayContents:(id)a2;
- (id)keyCapColor;
- (BOOL)keyIsControlType:(id)a0;
- (BOOL)keyIsStringType:(id)a0;
- (void)keyWithLabel;
- (void)keyWithSymbolView;
- (void)makeKeyBackgrounds;
- (id)nameFromControlType:(int)a0;
- (id)roundedRectForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)shadowPathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)symbolImageConfigForRenderTraits:(id)a0 traitCollection:(id)a1;
- (void)updateLabelInsets;
- (void)updateLabelText:(id)a0;
- (void)updateLabelWeight:(long long)a0;
- (void)updateRenderTraits:(id)a0 displayContents:(id)a1;
- (void)updateSymbolInsets;

@end
