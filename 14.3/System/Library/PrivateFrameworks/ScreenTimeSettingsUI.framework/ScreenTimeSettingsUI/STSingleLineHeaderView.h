@class UILabel, PSSpecifier;

@interface STSingleLineHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView>

@property (readonly, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) PSSpecifier *specifier;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)reloadFromSpecifier;
- (id)initWithSpecifier:(id)a0 useContentLayoutGuide:(BOOL)a1;

@end
