@class NSArray, UILabel;

@interface MCInstallationWarningCell : UITableViewCell

@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UILabel *warningLabel;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupConstraints;
- (void)_setup;
- (void).cxx_destruct;

@end
