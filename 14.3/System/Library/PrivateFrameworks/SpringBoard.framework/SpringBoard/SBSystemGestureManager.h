@class FBSDisplayIdentity, NSSet, NSString, NSMutableDictionary, NSMutableSet, SBIndirectTouchLifecycleMonitor, UIGestureRecognizer;

@interface SBSystemGestureManager : NSObject <UIGestureRecognizerDelegate, BSDescriptionProviding> {
    FBSDisplayIdentity *_displayIdentity;
    NSMutableDictionary *_typeToGesture;
    NSMutableDictionary *_gestureToType;
    NSMutableDictionary *_typeToState;
    NSMutableSet *_recognizingTouchGestures;
    NSMutableSet *_touchGestures;
    NSMutableSet *_gesturesDisabledAssertions;
    NSSet *_gestureTypesAllowedWhileDisableAssertionsExist;
    UIGestureRecognizer *_stylusPriorityRecognizer;
}

@property (readonly, nonatomic, getter=isAnyTouchGestureRunning) BOOL anyTouchGestureRunning;
@property (nonatomic, getter=areSystemGesturesDisabledForAccessibility) BOOL systemGesturesDisabledForAccessibility;
@property (retain, nonatomic) NSSet *gesturesPreventedByStylus;
@property (retain, nonatomic) SBIndirectTouchLifecycleMonitor *indirectTouchLifecycleMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainDisplayManager;

- (void)removeGestureRecognizer:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_evaluateEnablement;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)windowForSystemGestures;
- (void)dealloc;
- (BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)a0;
- (id)succinctDescription;
- (void)ignoreScreenEdgeTouchWithIdentifier:(unsigned int)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)addGestureRecognizer:(id)a0 withType:(unsigned long long)a1;
- (id)succinctDescriptionBuilder;
- (void)gestureRecognizerOfType:(unsigned long long)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (BOOL)_isGestureWithTypeAllowed:(unsigned long long)a0;
- (id)acquireSystemGestureDisableAssertionForReason:(id)a0 exceptSystemGestureTypes:(id)a1;
- (id)_initWithDisplayIdentity:(id)a0;
- (BOOL)isGestureWithTypeAllowed:(unsigned long long)a0;
- (void)gestureRecognizerOfType:(unsigned long long)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_systemGestureChanged:(id)a0;
- (long long)_recognitionEventForTouchGestureType:(unsigned long long)a0;
- (void)_enableSystemGesture:(id)a0 withType:(unsigned long long)a1;
- (BOOL)shouldEnableSystemGestureWithType:(unsigned long long)a0;
- (void)_disableSystemGesture:(id)a0 withType:(unsigned long long)a1;
- (BOOL)_isTouchGestureWithType:(unsigned long long)a0;

@end
