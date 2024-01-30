@class UIBezierPath, NSMutableArray, AMSUIMessageView;

@interface AMSUIMessageViewLayoutContext : NSObject

@property (weak, nonatomic) AMSUIMessageView *messageView;
@property (nonatomic) struct CGSize { double width; double height; } lastFittingSize;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mainContentFrame;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessoryViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessorySecondaryViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } footerContainerViewFrame;
@property (retain, nonatomic) NSMutableArray *footerButtonFrames;
@property (retain, nonatomic) NSMutableArray *footerButtonFramesPreFlatten;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskViewFrame;
@property (retain, nonatomic) NSMutableArray *separatorViewFrames;
@property (nonatomic) struct CGSize { double width; double height; } textViewContentHuggingSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textViewFrame;
@property (nonatomic) BOOL isDirty;
@property (retain, nonatomic) UIBezierPath *textViewExclusionPath;
@property (readonly, nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentLayoutMargins;
@property (readonly, nonatomic) double accessorySpacing;
@property (readonly, nonatomic) BOOL shouldUseStackedLayout;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)invalidate;
- (void).cxx_destruct;
- (double)_interitemSpacing;
- (BOOL)_isSymbolImage;
- (double)separatorThickness;
- (void)calculateTextViewExclusionFrame;
- (double)_bannerMaxTextWidth;
- (void)_calculateFooterButtonFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectiveTextViewFrame;
- (double)_footerButtonSpacing;
- (double)_footerMinimumHeight;
- (double)_imageLength;
- (double)_imageToLabelSpacing;
- (BOOL)_isAccessoryViewLeading;
- (BOOL)_isFooterButtonPartOfContentFrame;
- (BOOL)_isIconImageTopAligned;
- (BOOL)_isTextOnlyBanner;
- (struct CGSize { double x0; double x1; })_makeImageViewSize;
- (double)_scaledUIValueForValue:(double)a0;
- (BOOL)_shouldOffsetFooterButtonFromMainContentView;
- (BOOL)_shouldTextViewTextFillUnderCloseButton;
- (void)_updateWithRootFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)calculateAccessorySecondaryViewFrame;
- (void)calculateAccessorySecondaryViewSize;
- (void)calculateAccessoryViewFrame;
- (void)calculateAccessoryViewSize;
- (void)calculateMainContentFrameRootFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)calculateTextViewSizeInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dirty:(BOOL)a1;
- (unsigned long long)effectiveImageStyle;
- (id)initWithMessageView:(id)a0;
- (BOOL)isImageViewHidden;
- (void)layoutSubviewFrames;
- (double)leadingContentTextBaseline;
- (double)totalFooterButtonHeight;

@end
