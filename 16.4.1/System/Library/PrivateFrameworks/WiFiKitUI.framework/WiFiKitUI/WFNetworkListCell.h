@class UIStackView, NSString, UIImageView, WFAssociationStateView, UILabel, NSLayoutConstraint, WFHotspotDetails;

@interface WFNetworkListCell : UITableViewCell <WFNetworkCell>

@property (weak, nonatomic) UIImageView *signalImageView;
@property (weak, nonatomic) UIImageView *lockImageView;
@property (weak, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (weak, nonatomic) WFAssociationStateView *associationStateView;
@property (weak, nonatomic) NSLayoutConstraint *signalImageViewCenterConstraint;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL secure;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long bars;
@property (nonatomic) BOOL personalHotspot;
@property (retain, nonatomic) WFHotspotDetails *hotspotDetails;
@property (nonatomic) BOOL connectionError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awakeFromNib;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)a0;
- (double)_verticalPadding;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)_adjustStackViewPadding;
- (void)_updateSignalImage;
- (void)_updateTextColorForLabel:(id)a0;
- (void)_updateTintColorForImageView:(id)a0;
- (id)imageFromSignalBars:(unsigned long long)a0;
- (void)setHotspotDetails:(id)a0;

@end
