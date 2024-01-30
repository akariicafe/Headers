@class NSString;

@interface VSOnboardingInfoCenter : NSObject

@property (readonly, copy, nonatomic) NSString *localizedButtonTitle;

- (void)presentDetailsFromViewController:(id)a0;
- (id)tvProviderPrivacyButtonViewController;
- (id)tvAppPrivacyButtonViewController;

@end
