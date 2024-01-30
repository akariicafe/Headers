@class UIView;

@interface HKViewTableViewCell : UITableViewCell

@property (readonly, nonatomic) UIView *hostedView;

- (void)setHostedView:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_pinViewToContent:(id)a0;

@end
