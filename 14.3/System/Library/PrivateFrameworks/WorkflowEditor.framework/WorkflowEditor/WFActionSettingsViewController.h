@class NSDictionary, WFAction;
@protocol WFActionSettingsViewControllerDelegate;

@interface WFActionSettingsViewController : UIViewController

@property (weak, nonatomic) id<WFActionSettingsViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFAction *action;
@property (readonly, nonatomic) NSDictionary *definition;

- (void).cxx_destruct;
- (BOOL)accessibilityPerformEscape;
- (void)donePressed:(id)a0;
- (id)initWithAction:(id)a0 definition:(id)a1;

@end
