@class UIButton, UIListContentView, NSArray;

@interface EKUIClearButtonCell : EKUITableViewCell {
    UIListContentView *_listContentView;
    NSArray *_constraints;
}

@property (readonly, nonatomic) UIButton *clearButton;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateConfigurationNumLines:(id)a0;
- (void)setTitleSubtitleContentConfiguration:(id)a0;

@end
