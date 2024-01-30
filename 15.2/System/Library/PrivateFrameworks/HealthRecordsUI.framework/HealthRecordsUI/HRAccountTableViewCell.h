@class NSString;

@interface HRAccountTableViewCell : HRSourceTableViewCell {
    void /* unknown type, empty encoding */ brandView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)configureWithAccount:(id)a0 dataProvider:(id)a1;

@end
