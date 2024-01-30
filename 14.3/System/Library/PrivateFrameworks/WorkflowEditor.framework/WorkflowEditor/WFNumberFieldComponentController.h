@interface WFNumberFieldComponentController : CKStatefulViewComponentController

+ (id)newStatefulView:(id)a0;
+ (void)configureStatefulView:(id)a0 forComponent:(id)a1;

- (void)valueChanged;
- (void)didAcquireStatefulView:(id)a0;
- (void)willRelinquishStatefulView:(id)a0;
- (void)valueChangedThrottled;

@end
