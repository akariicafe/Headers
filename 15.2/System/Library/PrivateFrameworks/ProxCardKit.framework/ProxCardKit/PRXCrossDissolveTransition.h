@class NSString;

@interface PRXCrossDissolveTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (copy, nonatomic) id /* block */ additionalAnimations;
@property (nonatomic) long long cardStyle;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;

@end
