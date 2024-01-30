@class CKComponent, UIView;

@interface CKComponentController : NSObject {
    unsigned long long _state;
    BOOL _updatingComponent;
    BOOL _performedInitialMount;
    CKComponent *_previousComponent;
    struct CKComponentControllerAnimationWrapper { struct unique_ptr<CKComponentControllerAnimationData, std::__1::default_delete<CKComponentControllerAnimationData> > { struct __compressed_pair<CKComponentControllerAnimationData *, std::__1::default_delete<CKComponentControllerAnimationData> > { struct CKComponentControllerAnimationData *__value_; } __ptr_; } _animationData; } _animationData;
}

@property (readonly, weak, nonatomic) CKComponent *component;
@property (readonly, nonatomic) UIView *view;

- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void).cxx_destruct;
- (id)nextResponder;
- (id).cxx_construct;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (id)initWithComponent:(id)a0;
- (void)didMount;
- (void)didUpdateComponent;
- (void)willUpdateComponent;
- (void)componentTreeWillAppear;
- (void)componentTreeDidDisappear;
- (void)willUnmount;
- (void)didUnmount;
- (void)componentDidMount:(id)a0;
- (void)component:(id)a0 willRelinquishView:(id)a1;
- (void)componentDidUnmount:(id)a0;
- (void)componentWillUnmount:(id)a0;
- (void)component:(id)a0 didAcquireView:(id)a1;
- (void)componentWillMount:(id)a0;
- (void)willMount;
- (void)willRemount;
- (void)didRemount;
- (void)componentWillRelinquishView;
- (void)componentDidAcquireView;
- (void)_relinquishView;
- (void)_cleanupAppliedAnimations;

@end
