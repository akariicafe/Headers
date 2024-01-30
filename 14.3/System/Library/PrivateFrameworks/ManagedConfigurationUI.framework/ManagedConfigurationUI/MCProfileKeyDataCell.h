@class UILabel, NSArray;

@interface MCProfileKeyDataCell : UITableViewCell

@property (retain, nonatomic) UILabel *keyLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *constraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setup;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)_setupConstraints;
- (void)setKeyValue:(id)a0;

@end
