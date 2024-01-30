@class NSString;

@interface WFContactFieldComponentController : CKStatefulViewComponentController <WFContactFieldDelegate>

@property (nonatomic, getter=isMounted) BOOL mounted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newStatefulView:(id)a0;
+ (void)configureStatefulView:(id)a0 forComponent:(id)a1;

- (void)didMount;
- (void)didAcquireStatefulView:(id)a0;
- (void)willRelinquishStatefulView:(id)a0;
- (id)viewControllerContainingContactField:(id)a0;
- (void)willUnmount;

@end
