@class UIView, NSString, UITapGestureRecognizer, UIImage, MRURoutingAccessoryView, MRUSlider, UIImageView, MRUVolumeController, MRUVisualStylingProvider, MRURoutingSubtitleController, UILabel, MRURoutingSubtitleView;
@protocol MRUVendorSpecificTableViewCellDelegate;

@interface MRUVendorSpecificTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver, UIGestureRecognizerDelegate, UIPointerInteractionDelegate, MRUVolumeControllerDelegate>

@property (retain, nonatomic) UIImageView *deviceIconImageView;
@property (retain, nonatomic) UILabel *deviceNameLabel;
@property (retain, nonatomic) MRUSlider *volumeSlider;
@property (retain, nonatomic) MRURoutingSubtitleView *subtitleView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIImageView *expandChevronView;
@property (retain, nonatomic) UITapGestureRecognizer *expandGestureRecognizer;
@property (weak, nonatomic) id<MRUVendorSpecificTableViewCellDelegate> delegate;
@property (retain, nonatomic) UIImage *deviceIconImage;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long type;
@property (nonatomic) BOOL expanded;
@property (retain, nonatomic) UIImage *protocolIcon;
@property (copy, nonatomic) NSString *protocolName;
@property (readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView;
@property (readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController;
@property (weak, nonatomic) MRUVolumeController *volumeController;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
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
- (void)didTapToExpand;
- (void)adjustExpandChevronAngle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandRect;
- (void)routingSubtitleStateController:(id)a0 didUpdateText:(id)a1 icon:(id)a2 accessory:(long long)a3;
- (void)setSubtitleAccessory:(long long)a0;
- (void)transitionToNextVisibleStateWithDuration:(double)a0;

@end
