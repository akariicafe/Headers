@class UIView, NSString, UITapGestureRecognizer, UIImage, MRURoutingAccessoryView, UIImageView, MRUVolumeSlider, MRUVisualStylingProvider, MRURoutingSubtitleController, UILabel, MRURoutingSubtitleView;
@protocol MRURoutingTableViewCellDelegate;

@interface MRURoutingTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, UIGestureRecognizerDelegate, UIPointerInteractionDelegate>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *outlineImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MRURoutingSubtitleView *subtitleView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UITapGestureRecognizer *expandGestureRecognizer;
@property (weak, nonatomic) id<MRURoutingTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController;
@property (readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView;
@property (retain, nonatomic) MRUVolumeSlider *volumeSlider;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) BOOL showOutline;
@property (nonatomic) BOOL showVolumeSlider;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSubtitle:(id)a0;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)a0;
- (void)didTapToExpand;
- (void)updateVisualStyling;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateVisibility;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateContentSizeCategory;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)visualStylingProviderDidChange:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)routingSubtitleStateController:(id)a0 didUpdateText:(id)a1 accessory:(long long)a2;
- (void)setSubtitleAccessory:(long long)a0;
- (void)transitionToNextVisibleStateWithDuration:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandRect;

@end
