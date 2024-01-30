@class UIImageView, UIActivityIndicatorView, UILabel, NSLayoutConstraint;

@interface FBKDevicePairingCell : UITableViewCell

@property (weak, nonatomic) UIImageView *deviceImage;
@property (weak, nonatomic) UILabel *mainLabel;
@property (weak, nonatomic) UILabel *detailLabel;
@property (weak, nonatomic) UIImageView *statusIndicatorImageView;
@property (weak, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) NSLayoutConstraint *detailLabelTrailingConstraint;
@property (nonatomic) double detailLabelTrailingConstraintInitial;
@property (weak, nonatomic) UILabel *subLabel;

+ (double)estimatedRowHeight;

- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (double)spaceFromSuperViewToLabel;
- (void)updateWithDevice:(id)a0 showsDetail:(BOOL)a1 showsTransport:(BOOL)a2;
- (void)updateWithDevice:(id)a0 showsDetail:(BOOL)a1 showsTransport:(BOOL)a2 isSelected:(BOOL)a3;

@end
