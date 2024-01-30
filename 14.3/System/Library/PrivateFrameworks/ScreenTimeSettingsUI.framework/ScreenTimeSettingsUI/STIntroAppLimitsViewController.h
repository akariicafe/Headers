@class STIntroductionModel, OBBoldTrayButton, STIntroAppLimitsTableViewController;

@interface STIntroAppLimitsViewController : STTableWelcomeController

@property (readonly) STIntroductionModel *model;
@property (readonly, copy) id /* block */ continueHandler;
@property (retain) OBBoldTrayButton *setAppLimitButton;
@property (retain, nonatomic) STIntroAppLimitsTableViewController *tableViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_notNow:(id)a0;
- (void)_setAppLimit:(id)a0;
- (void)_allowanceTimeDidChange:(id)a0;
- (void)_allowanceSelectedCategoriesDidChange:(id)a0;
- (void)_updateSetAppLimitButtonWithTime:(id)a0 selectedCategories:(id)a1;
- (id)initWithIntroductionModel:(id)a0 continueHandler:(id /* block */)a1;

@end
