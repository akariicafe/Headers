@class UIBezierPath, NSMutableArray, AMSUIMessageView;

@interface AMSUIMessageViewLayoutContext : NSObject

@property (weak, nonatomic) AMSUIMessageView *messageView;
@property (nonatomic) struct CGSize { double width; double height; } lastFittingSize;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mainContentFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessoryViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } footerContainerViewFrame;
@property (retain, nonatomic) NSMutableArray *footerButtonFrames;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskViewFrame;
@property (retain, nonatomic) NSMutableArray *separatorViewFrames;
@property (nonatomic) struct CGSize { double width; double height; } textViewContentHuggingSize;
@property (nonatomic) double textViewFrameCenteredYOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textViewFrame;
@property (nonatomic) BOOL isDirty;
@property (retain, nonatomic) UIBezierPath *textViewExclusionPath;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentLayoutMargins;
@property (readonly, nonatomic) double accessorySpacing;
@property (readonly, nonatomic) BOOL shouldUseStackedLayout;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_isSymbolImage;
- (void).cxx_destruct;
- (void)invalidate;
- (double)_interitemSpacing;
- (double)_footerHeight;
- (id)initWithMessageView:(id)a0;
- (void)layoutSubviewFrames;
- (void)_updateWithRootFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizing:(BOOL)a1;
- (BOOL)isImageViewHidden;
- (struct CGSize { double x0; double x1; })_makeImageViewSize;
- (double)_labelSpacing;
- (void)calculateMainContentFrameRootFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)calculateAccessoryViewSize;
- (void)calculateAccessoryViewFrame;
- (void)calculateTextViewSizeInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dirty:(BOOL)a1;
- (BOOL)_isAccessoryViewLeading;
- (double)totalFooterButtonHeight;
- (double)leadingContentTextBaseline;
- (BOOL)_isTextOnlyBanner;
- (double)_scaledUIValueForValue:(double)a0;
- (double)_bannerMaxTextWidth;
- (void)calculateTextViewExlcusionFrame;
- (double)_imageLength;

@end
