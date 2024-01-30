@class NSString, NSArray, UILabel, UIButton;

@interface SFBannerCell : UICollectionViewCell {
    UIButton *_dismissButton;
    UILabel *_messageLabel;
    NSArray *_minimalLayoutConstraints;
    NSArray *_prominentLayoutConstraints;
    UILabel *_titleLabel;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) long long bannerStyle;

- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)_dismiss:(id)a0;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
