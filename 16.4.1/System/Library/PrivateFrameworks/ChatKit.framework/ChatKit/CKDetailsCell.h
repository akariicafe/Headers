@class UIView;

@interface CKDetailsCell : UITableViewCell

@property (retain, nonatomic) UIView *topSeperator;
@property (retain, nonatomic) UIView *bottomSeperator;
@property (nonatomic) BOOL indentTopSeperator;
@property (nonatomic) BOOL indentBottomSeperator;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
