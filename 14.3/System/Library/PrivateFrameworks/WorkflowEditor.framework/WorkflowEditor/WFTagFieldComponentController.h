@class NSString;

@interface WFTagFieldComponentController : CKStatefulViewComponentController <WFTagFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newStatefulView:(id)a0;
+ (void)configureStatefulView:(id)a0 forComponent:(id)a1;

- (id)viewControllerContainingTagField:(id)a0;
- (void)didAcquireStatefulView:(id)a0;
- (void)willRelinquishStatefulView:(id)a0;

@end
