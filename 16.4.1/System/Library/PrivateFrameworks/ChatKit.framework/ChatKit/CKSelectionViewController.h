@protocol CKSelectionViewControllerDelegate;

@interface CKSelectionViewController : UIViewController

@property (weak, nonatomic) id<CKSelectionViewControllerDelegate> delegate;

- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_deleteAction;
- (id)_defaultConfigurationWithSelectionCount:(long long)a0;
- (id)_deleteAllAction;
- (id)_junkFilteringConfigurationWithSelectionCount:(long long)a0 secondaryText:(id)a1;
- (id)_recentlyDeletedConfigurationWithSelectionCount:(long long)a0 secondaryText:(id)a1;
- (id)_recoverAction;
- (void)_updatePropertiesAsDeleteAllButton:(id)a0;
- (void)_updatePropertiesAsDeleteButton:(id)a0;
- (void)_updatePropertiesAsDestructiveButton:(id)a0 buttonText:(id)a1;
- (void)_updatePropertiesAsRecoverButton:(id)a0;

@end
