@class NSString, UIFocusAnimationCoordinator, UIWindow, _UIFocusSearchInfo, _UIFocusInputDeviceInfo, _UIFocusItemInfo, UIFocusSystem, _UIFocusMovementInfo;

@interface _UIFocusMovementRequest : NSObject <_UIFocusUpdateRequesting>

@property (readonly, weak, nonatomic) UIWindow *window;
@property (retain, nonatomic) _UIFocusItemInfo *focusedItemInfo;
@property (retain, nonatomic) _UIFocusMovementInfo *movementInfo;
@property (retain, nonatomic) _UIFocusSearchInfo *searchInfo;
@property (retain, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly, nonatomic) _UIFocusMovementRequest *fallbackRequest;
@property (nonatomic) BOOL shouldPerformHapticFeedback;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, nonatomic, getter=isMovementRequest) BOOL movementRequest;
@property (readonly, nonatomic, getter=shouldScrollIfNecessary) BOOL scrollIfNecessary;
@property (readonly, nonatomic) BOOL shouldPlayFocusSound;
@property (readonly, nonatomic) BOOL requiresNextFocusedItem;
@property (readonly, nonatomic) BOOL requiresEnvironmentValidation;
@property (readonly, nonatomic) BOOL allowsFocusingCurrentItem;
@property (readonly, nonatomic) BOOL allowsDeferral;
@property (readonly, nonatomic) BOOL allowsOverridingPreferedFocusEnvironments;
@property (readonly, nonatomic) UIFocusAnimationCoordinator *animationCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
