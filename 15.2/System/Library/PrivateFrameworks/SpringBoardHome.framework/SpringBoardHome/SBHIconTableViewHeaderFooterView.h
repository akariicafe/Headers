@class NSString;

@interface SBHIconTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } titleLayoutMargins;

- (void).cxx_destruct;
- (void)updateConfigurationUsingState:(id)a0;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0;

@end
