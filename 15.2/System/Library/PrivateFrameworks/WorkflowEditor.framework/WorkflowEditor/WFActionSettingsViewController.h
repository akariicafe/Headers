@class NSDictionary, WFAction;
@protocol WFActionSettingsViewControllerDelegate;

@interface WFActionSettingsViewController : UIViewController

@property (weak, nonatomic) id<WFActionSettingsViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFAction *action;
@property (readonly, nonatomic) NSDictionary *definition;

- (BOOL)accessibilityPerformEscape;
- (void).cxx_destruct;
- (void)donePressed:(id)a0;
- (id)initWithAction:(id)a0 definition:(id)a1;

@end
