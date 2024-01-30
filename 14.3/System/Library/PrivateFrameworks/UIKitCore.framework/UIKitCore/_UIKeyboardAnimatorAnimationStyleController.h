@class NSString, _UIKeyboardAnimator;

@interface _UIKeyboardAnimatorAnimationStyleController : NSObject <UIInputViewAnimationController> {
    _UIKeyboardAnimator *_animator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performAnimationWithHost:(id)a0 context:(id)a1;
- (id)prepareAnimationWithHost:(id)a0 startPlacement:(id)a1 endPlacement:(id)a2;
- (void)completeAnimationWithHost:(id)a0 context:(id)a1;
- (id)initWithAnimator:(id)a0;

@end
