@class UILabel, UIImageView;

@interface _CKAcknowledgmentVoteCountView : UIView

@property (retain, nonatomic) UILabel *voteCountLabel;
@property (retain, nonatomic) UIImageView *ackIconImageView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithAcknowledgmentTally:(id)a0;

@end
