@class UIInputViewAnimationStyle, UIInputViewSetNotificationInfo, UIInputViewSetPlacement;
@protocol NSObject, UIInputViewAnimationController;

@interface UIInputViewPlacementTransition : NSObject

@property (retain, nonatomic) UIInputViewSetPlacement *fromPlacement;
@property (retain, nonatomic) UIInputViewSetPlacement *toPlacement;
@property (retain, nonatomic) UIInputViewAnimationStyle *animationStyle;
@property (retain, nonatomic) UIInputViewSetNotificationInfo *notificationInfo;
@property (nonatomic) unsigned long long notifications;
@property (nonatomic) int animationState;
@property (retain, nonatomic) id<UIInputViewAnimationController> animationController;
@property (retain, nonatomic) id<NSObject> animationContext;
@property (nonatomic) BOOL cancelled;

+ (id)transitionFromPlacement:(id)a0 toPlacement:(id)a1 withAnimationStyle:(id)a2;

- (BOOL)didAdvanceAnimationToState:(int)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
