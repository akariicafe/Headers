@interface NCNotificationManagementDemotionAlertController : NCNotificationManagementAlertController

@property (nonatomic) BOOL includeExplanation;

- (void)_configureView;
- (id)initWithRequest:(id)a0 withPresentingView:(id)a1 settingsDelegate:(id)a2 includeExplanation:(BOOL)a3;

@end
