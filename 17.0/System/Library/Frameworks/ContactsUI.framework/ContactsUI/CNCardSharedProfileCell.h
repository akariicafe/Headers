@class CNCardSharedProfileCellView, CNSharedProfileStateOracle, CNContact;
@protocol CNCardSharedProfileCellActionDelegate;

@interface CNCardSharedProfileCell : CNPropertyCell <CNCardSharedProfileCellViewDelegate>

@property (retain, nonatomic) CNCardSharedProfileCellView *snapView;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (weak, nonatomic) id<CNCardSharedProfileCellActionDelegate> actionDelegate;

+ (BOOL)shouldIndentWhileEditing;

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)viewDidSelectDisplayPreference:(long long)a0;
- (BOOL)allowsCellSelection;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForVerticalLayout;
- (void)setCardGroupItem:(id)a0;
- (void)setLabelTextAttributes:(id)a0;
- (void)updateViewsWithCardGroupItem:(id)a0;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;
- (void)viewDidSelectFallbackAction;

@end
