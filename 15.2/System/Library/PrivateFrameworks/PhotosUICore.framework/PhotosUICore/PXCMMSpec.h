@class UIColor;

@interface PXCMMSpec : PXFeatureSpec

@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) UIColor *reviewBackgroundColor;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } reviewContentInsets;
@property (readonly, nonatomic) struct CGSize { double width; double height; } reviewGridInterItemSpacing;
@property (readonly, nonatomic) struct CGSize { double width; double height; } reviewGridItemSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } reviewSafeAreaInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } reviewGridContentInsets;
@property (readonly, nonatomic) long long reviewGridContentMode;
@property (readonly, nonatomic) double reviewHeaderTopInset;
@property (readonly, nonatomic) double reviewHeaderCornerRadius;
@property (readonly, nonatomic) double reviewBannerHeight;
@property (readonly, nonatomic) double reviewSendBackFooterHeight;
@property (readonly, nonatomic) double reviewFooterBottomInset;
@property (readonly, nonatomic) double reviewSectionHeaderHeight;
@property (readonly, nonatomic) UIColor *composeRecipientViewBackgroundColor;
@property (readonly, nonatomic) double composeCornerRadius;
@property (readonly, nonatomic) double composePrivacyMessageInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } composeHeaderLabelMargins;
@property (readonly, nonatomic) double composeHeaderVerticalPadding;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } composeFooterInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } composeFooterMargins;
@property (readonly, nonatomic) UIColor *bubbleBackgroundColor;
@property (readonly, nonatomic) double bubbleStatusIconCornerRadius;

+ (double)maxBubbleWidthForDisplayScale:(double)a0;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 activityType:(unsigned long long)a2;
- (double)_reviewSectionHeaderHeightForContentSize:(id)a0;

@end
