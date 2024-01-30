@interface NCNotificationManagementDemotionAlertController : NCNotificationManagementAlertController

@property (nonatomic) BOOL includeExplanation;

- (id)initWithRequest:(id)a0 withPresentingView:(id)a1 settingsDelegate:(id)a2 includeExplanation:(BOOL)a3;
- (void)_configureView;

@end
