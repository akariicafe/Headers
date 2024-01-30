@class NSSet, NSMutableSet, NSDate;

@interface SBClawGestureLogger : NSObject {
    BOOL _didTriggerSOS;
    NSDate *_clawEventTimestamp;
    NSSet *_activePressTypes;
    NSMutableSet *_participatingPressTypes;
}

- (void).cxx_destruct;
- (id)init;
- (void)noteActiveGesturePressTypes:(id)a0 wasClawGestureActive:(BOOL)a1 isClawGestureActive:(BOOL)a2;
- (void)noteSOSTriggered;
- (void)_publishLoggedData;
- (void)_resetLoggedData;

@end
