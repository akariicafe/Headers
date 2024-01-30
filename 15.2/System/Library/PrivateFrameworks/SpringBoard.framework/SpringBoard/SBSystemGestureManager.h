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

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_evaluateEnablement;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)_initWithDisplayIdentity:(id)a0;
- (id)succinctDescription;
- (BOOL)_isGestureWithTypeAllowed:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)windowForSystemGestures;
- (id)init;
- (void)removeGestureRecognizer:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)_shouldEnableSystemGestureWithType:(unsigned long long)a0;
- (void)addGestureRecognizer:(id)a0 withType:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)_isTouchGestureWithType:(unsigned long long)a0;
- (void)ignoreScreenEdgeTouchWithIdentifier:(unsigned int)a0;
- (BOOL)isGestureWithTypeAllowed:(unsigned long long)a0;
- (void)gestureRecognizerOfType:(unsigned long long)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)gestureRecognizerOfType:(unsigned long long)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_disableSystemGesture:(id)a0 withType:(unsigned long long)a1;
- (BOOL)shouldEnableSystemGestureWithType:(unsigned long long)a0;
- (void)_enableSystemGesture:(id)a0 withType:(unsigned long long)a1;
- (void)_systemGestureChanged:(id)a0;
- (long long)_recognitionEventForTouchGestureType:(unsigned long long)a0;
- (id)acquireSystemGestureDisableAssertionForReason:(id)a0 exceptSystemGestureTypes:(id)a1;

@end
