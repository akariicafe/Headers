@class HKSource, HKClinicalSourceAuthorizationController;

@interface HKClinicalAuthorizationDisplayController : NSObject

@property (readonly, nonatomic) HKClinicalSourceAuthorizationController *authorizationController;
@property (readonly, copy, nonatomic) HKSource *source;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAuthorizationController:(id)a0;
- (id)currentTimeTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)a0 formatBlock:(id /* block */)a1;
- (id)currentTimeDisplayStringForReadAuthorizationFooter;
- (id)committedTitleForReadAuthorizationModeFooterWithSelectedMode:(long long)a0 formatBlock:(id /* block */)a1;
- (id)_displayStringForReadAuthorizationDate:(id)a0;
- (id)_displayReadAuthorizationDateForMode:(long long)a0;

@end
