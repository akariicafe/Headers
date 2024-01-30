@class UIView;

@interface HKViewTableViewCell : UITableViewCell

@property (readonly, nonatomic) UIView *hostedView;

- (void)prepareForReuse;
- (void)setHostedView:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_pinViewToContent:(id)a0;

@end
