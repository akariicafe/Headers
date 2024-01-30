@class TLKImage, NSString, UIImageView, TLKProminenceView, UIView, TLKArrangementItem, NUIBoxArrangement;

@interface TLKImageView : TLKView <NUIBoxArrangementDataSource, NUIArrangementContainer>

@property (retain, nonatomic) UIView *shadowContainer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) TLKProminenceView *placeholderView;
@property (retain, nonatomic) TLKArrangementItem *sizingHelper;
@property (retain, nonatomic) NUIBoxArrangement *boxArrangement;
@property (retain, nonatomic) TLKImage *lastTlkImage;
@property (retain, nonatomic) TLKImage *tlkImage;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic) BOOL useButtonColoring;
@property (nonatomic) BOOL alwaysShowPlaceholderView;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (nonatomic) long long verticalAlignment;
@property (nonatomic) long long horizontalAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })roundedSizeForSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)imageIsEligibleForShadow:(id)a0 isTemplate:(BOOL)a1;

- (struct CGSize { double x0; double x1; })_imageSize;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)tlk_updateForAppearance:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (long long)numberOfItemsInBoxArrangement:(id)a0;
- (id)boxArrangement:(id)a0 itemAtIndex:(long long)a1 horizontalAlignment:(long long *)a2 verticalAlignment:(long long *)a3;
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 forArrangedSubview:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)a0 withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didMoveToWindow;
- (long long)effectiveUserInterfaceLayoutDirection;
- (void)layoutSubviews;
- (void)observedPropertiesChanged;
- (struct CGSize { double x0; double x1; })constrainedSizeForImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)invalidateIntrinsicContentSizeIfNecessary;
- (void)updateShadow;
- (id)actualImageView;
- (BOOL)_imageViewUsesSymbolConfiguration;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
