@class UIView;

@interface CKStatefulViewComponentController : CKComponentController {
    UIView *_statefulView;
    BOOL _mounted;
    id _statefulViewContext;
}

+ (id)contextForNewStatefulView:(id)a0;
+ (id)newStatefulView:(id)a0;
+ (void)configureStatefulView:(id)a0 forComponent:(id)a1;
+ (long long)maximumPoolSize:(id)a0;

- (void).cxx_destruct;
- (void)didAcquireStatefulView:(id)a0;
- (void)willRelinquishStatefulView:(id)a0;
- (id)statefulView;
- (void)didMount;
- (BOOL)canRelinquishStatefulView;
- (void)didUpdateComponent;
- (void)canRelinquishStatefulViewDidChange;
- (void)didUnmount;
- (void)didRemount;
- (void)_presentStatefulView;
- (void)_relinquishStatefulViewIfPossible;

@end
