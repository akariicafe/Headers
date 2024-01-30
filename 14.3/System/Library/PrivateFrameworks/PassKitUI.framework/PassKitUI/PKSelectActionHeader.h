@class NSString, UILabel;

@interface PKSelectActionHeader : UIView {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;
- (void)layoutSubviews;

@end
