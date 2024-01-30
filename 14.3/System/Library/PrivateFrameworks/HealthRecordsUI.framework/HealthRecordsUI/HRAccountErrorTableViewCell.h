@class NSString;

@interface HRAccountErrorTableViewCell : UITableViewCell {
    void /* unknown type, empty encoding */ accountErrorView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

- (void)configureWithAccount:(id)a0;
- (void)layoutMarginsDidChange;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
