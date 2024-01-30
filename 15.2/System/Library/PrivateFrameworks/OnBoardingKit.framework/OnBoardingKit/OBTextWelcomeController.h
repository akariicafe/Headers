@class OBTextBulletedList, UIStackView;

@interface OBTextWelcomeController : OBWelcomeController

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) OBTextBulletedList *currentBulletedList;

- (void)addSectionWithHeader:(id)a0 content:(id)a1 accessoryButton:(id)a2;
- (void)addBulletedListItemWithTitle:(id)a0 description:(id)a1 accessoryButton:(id)a2;
- (BOOL)shouldInlineButtonTray;
- (id)initWithTitle:(id)a0 detailText:(id)a1 contentLayout:(long long)a2;
- (void)addBulletedListItemWithTitle:(id)a0 description:(id)a1;
- (id)initWithTitle:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)addSectionWithHeader:(id)a0 content:(id)a1;

@end
