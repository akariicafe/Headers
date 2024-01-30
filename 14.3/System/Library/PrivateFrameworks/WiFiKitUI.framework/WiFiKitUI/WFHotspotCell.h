@class UIStackView, WFHotspotDetailsView, WFAssociationStateView, NSString, UILabel, NSLayoutConstraint, WFHotspotDetails;

@interface WFHotspotCell : UITableViewCell <WFNetworkCell>

@property (weak, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) UILabel *nameLabel;
@property (weak, nonatomic) WFHotspotDetailsView *hotspotDetailsView;
@property (weak, nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (weak, nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (weak, nonatomic) WFAssociationStateView *associationStateView;
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

- (double)_verticalPadding;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)setSubtitle:(id)a0;
- (void)setConnectionError:(BOOL)a0;
- (void)setState:(long long)a0;
- (long long)state;
- (void)traitCollectionDidChange:(id)a0;
- (void)_adjustStackViewPadding;

@end
