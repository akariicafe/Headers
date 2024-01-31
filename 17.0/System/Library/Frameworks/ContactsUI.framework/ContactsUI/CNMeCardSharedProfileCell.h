@class CNMeCardSharedProfileCellContentView;

@interface CNMeCardSharedProfileCell : CNLabeledCell <CNContactSharedProfileSettingsActionDelegate>

@property (retain, nonatomic) CNMeCardSharedProfileCellContentView *meCardSharedProfileContentView;

+ (BOOL)shouldIndentWhileEditing;

- (void)setMeContact:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForVerticalLayout;
- (void)nicknameStoreDidChange;
- (void)performDefaultAction;
- (void)setLabelTextAttributes:(id)a0;
- (void)setUpView;
- (void)sharedProfileSettingsDidUpdate;
- (BOOL)shouldPerformDefaultAction;
- (void)updateViews;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;

@end
