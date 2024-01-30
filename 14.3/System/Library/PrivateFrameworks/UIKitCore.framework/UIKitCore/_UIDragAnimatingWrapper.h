@class NSString, UIViewPropertyAnimator;

@interface _UIDragAnimatingWrapper : NSObject <UIDragAnimating> {
    UIViewPropertyAnimator *_animator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addAnimations:(id /* block */)a0;
- (void)addCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_api_addCompletion:(id /* block */)a0;
- (id)initWithPropertyAnimator:(id)a0;

@end
