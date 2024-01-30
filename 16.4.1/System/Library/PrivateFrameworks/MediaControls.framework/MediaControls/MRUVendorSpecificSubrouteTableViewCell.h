@class MRURoutingAccessoryView, NSString, UIImage, UIView, MRUVisualStylingProvider, UIImageView, MRURoutingSubtitleController, UILabel, MRURoutingSubtitleView;

@interface MRUVendorSpecificSubrouteTableViewCell : UITableViewCell <MRURoutingSubtitleControllerDelegate, MRUVisualStylingProviderObserver>

@property (retain, nonatomic) UIImageView *protocolIconView;
@property (retain, nonatomic) UILabel *protocolNameLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) MRURoutingSubtitleView *subtitleView;
@property (retain, nonatomic) UIImage *protocolIcon;
@property (copy, nonatomic) NSString *protocolName;
@property (readonly, nonatomic) MRURoutingAccessoryView *routingAccessoryView;
@property (readonly, nonatomic) MRURoutingSubtitleController *subtitleStateController;
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateVisualStyling;
- (void)updateContentSizeCategory;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)visualStylingProviderDidChange:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setIcon:(id)a0;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)routingSubtitleStateController:(id)a0 didUpdateText:(id)a1 icon:(id)a2 accessory:(long long)a3;
- (void)setSubtitleAccessory:(long long)a0;

@end
