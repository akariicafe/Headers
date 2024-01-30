@class NSString;

@interface HRAccountHeaderCell : UITableViewCell {
    void /* unknown type, empty encoding */ accountView;
    void /* unknown type, empty encoding */ paddedView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithAccount:(id)a0;

@end
