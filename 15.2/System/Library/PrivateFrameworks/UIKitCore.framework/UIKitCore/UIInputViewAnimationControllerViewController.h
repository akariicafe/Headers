@class NSString, UIInputViewSetPlacement;
@protocol UIViewControllerAnimatedTransitioning_Keyboard, UIViewControllerContextTransitioning;

@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController> {
    id<UIViewControllerContextTransitioning> _context;
    id<UIViewControllerAnimatedTransitioning_Keyboard> _animator;
    UIInputViewSetPlacement *_endPlacement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerWithContext:(id)a0;

- (id)initWithContext:(id)a0;
- (void)performAnimationWithHost:(id)a0 context:(id)a1;
- (void)completeAnimationWithHost:(id)a0 context:(id)a1;
- (id)prepareAnimationWithHost:(id)a0 startPlacement:(id)a1 endPlacement:(id)a2;
- (void)dealloc;

@end
