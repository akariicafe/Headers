@class UILabel, NSArray;

@interface MCProfileKeyValueCell : UITableViewCell

@property (retain, nonatomic) UILabel *keyLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *constraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setup;
- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)_setupConstraints;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setKeyValue:(id)a0;

@end
