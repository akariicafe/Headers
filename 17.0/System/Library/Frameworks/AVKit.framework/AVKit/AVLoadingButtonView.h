@class AVButton, NSString, UIActivityIndicatorView, AVLayoutItemAttributes;

@interface AVLoadingButtonView : UIView <AVPlaybackControlsViewItem>

@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (readonly, nonatomic) AVButton *button;
@property (nonatomic) BOOL showsLoadingIndicator;
@property (nonatomic) struct CGSize { double x0; double x1; } extrinsicContentSize;
@property (nonatomic, getter=isRemoved) BOOL removed;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutAttributesDidChange;
- (void)_updateLayoutItem;
- (id)initWithTitle:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
