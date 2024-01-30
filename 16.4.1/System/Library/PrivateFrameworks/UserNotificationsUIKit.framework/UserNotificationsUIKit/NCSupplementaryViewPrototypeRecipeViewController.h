@class NSString, NSSet, NSDate, NCNotificationListSupplementaryViewConfiguration;
@protocol NCSupplementaryViewPrototypeRecipeViewControllerDelegate;

@interface NCSupplementaryViewPrototypeRecipeViewController : UIViewController <NCNotificationListBaseComponent>

@property (class, readonly, nonatomic) NSString *title;
@property (class, readonly, copy, nonatomic) NSSet *presentableTypes;

@property (readonly, nonatomic) NCNotificationListSupplementaryViewConfiguration *configuration;
@property (weak, nonatomic) id<NCSupplementaryViewPrototypeRecipeViewControllerDelegate> delegate;
@property (retain, nonatomic) NSDate *dateModified;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)updateConfiguration:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void)clearAll;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (id /* block */)_testActionNotImplementedBlock;

@end
