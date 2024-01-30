@class NSString;
@protocol UIViewControllerAnimatedTransitioning;

@interface _UISimpleTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {
    id<UIViewControllerAnimatedTransitioning> _animator;
}

@property (nonatomic, setter=_setSuppressCrossFadeNavigationBarAnimation:) BOOL _suppressCrossFadeNavigationBarAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
