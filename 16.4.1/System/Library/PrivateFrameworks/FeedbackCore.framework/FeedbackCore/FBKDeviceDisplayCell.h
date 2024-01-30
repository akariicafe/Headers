@class UILabel, UIImageView, NSString;

@interface FBKDeviceDisplayCell : UITableViewCell <FBKDiffableCell>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *typeLabel;
@property (weak, nonatomic) UIImageView *deviceIcon;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)setConnected:(BOOL)a0;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateWithDevice:(id)a0;
- (void)configureSelected:(BOOL)a0;
- (void)didTapConnectionButton:(id)a0;
- (double)spaceFromSuperViewToLabel;
- (void)updateNumberOfLines;

@end
