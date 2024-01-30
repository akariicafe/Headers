@class UIInputViewSet;

@interface UIInputViewTransition : NSObject {
    UIInputViewSet *oldSet;
    UIInputViewSet *newSet;
}

@property (readonly, nonatomic) UIInputViewSet *oldSet;

- (id)newSet;
- (void)postNotificationsForTransitionEnd;
- (void)postNotificationsForTransitionStart;

@end
