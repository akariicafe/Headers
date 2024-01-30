@class UIView, NSString, UITapGestureRecognizer, UIImage, MRURoutingAccessoryView, MRUSlider, UIImageView, MRUVolumeController, MRUVisualStylingProvider, MRURoutingSubtitleController, UILabel, MRURoutingSubtitleView;
@protocol MRURoutingTableViewCellDelegate;

@interface MRURoutingTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, MRUVolumeControllerDelegate, UIGestureRecognizerDelegate, UIPointerInteractionDelegate>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *outlineImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MRURoutingSubtitleView *subtitleView;
@property (retain, nonatomic) MRUSlider *volumeSlider;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UITapGestureRecognizer *expandGestureRecognizer;
@property (weak, nonatomic) id<MRURoutingTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController;
@property (readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView;
@property (weak, nonatomic) MRUVolumeController *volumeController;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) BOOL showChevron;
@property (nonatomic) BOOL showChevronExpanded;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void)sliderValueChanged:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateVisualStyling;
- (void)updateContentSizeCategory;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)updateVisibility;
- (void)prepareForReuse;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void)setIcon:(id)a0;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)_setShouldHaveFullLengthBottomSeparator:(BOOL)a0;
- (void)didTapToExpand;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandRect;
- (void)routingSubtitleStateController:(id)a0 didUpdateText:(id)a1 icon:(id)a2 accessory:(long long)a3;
- (void)setSubtitleAccessory:(long long)a0;
- (void)transitionToNextVisibleStateWithDuration:(double)a0;
- (void)volumeControllerDidFinishEqualization:(id)a0;
- (void)volumeControllerWillBeginEqualization:(id)a0;

@end
