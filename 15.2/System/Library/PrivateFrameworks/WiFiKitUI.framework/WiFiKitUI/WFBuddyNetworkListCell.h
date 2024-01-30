@class NSLayoutConstraint;

@interface WFBuddyNetworkListCell : WFNetworkListCell

@property (weak, nonatomic) NSLayoutConstraint *trailingImageViewConstraint;
@property (weak, nonatomic) NSLayoutConstraint *topLabelConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomLabelConstraint;

- (void)layoutSubviews;
- (void)setSubtitle:(id)a0;
- (void)awakeFromNib;
- (void).cxx_destruct;

@end
