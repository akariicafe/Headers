@class UIWindow, NSArray, UIKey, NSString, UIResponder, NSMutableArray;

@interface UIPress : NSObject <_UIResponderForwardable, _UIEventComponent> {
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    BOOL _abandonForwardingRecord;
}

@property (nonatomic) double timestamp;
@property (nonatomic) long long phase;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIResponder *responder;
@property (copy, nonatomic) NSArray *gestureRecognizers;
@property (retain, nonatomic) UIKey *key;
@property (nonatomic) long long modifierFlags;
@property (nonatomic) double force;
@property (nonatomic, getter=_source, setter=_setSource:) unsigned long long source;
@property (nonatomic, getter=_gameControllerComponent, setter=_setGameControllerComponent:) unsigned long long gameControllerComponent;
@property (readonly, nonatomic) unsigned int contextID;
@property (nonatomic) BOOL isDelayed;
@property (nonatomic) BOOL sentPressesEnded;
@property (nonatomic) unsigned long long clickCount;
@property (nonatomic, getter=isLongClick) BOOL longClick;
@property (nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
@property (retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_loadStateFromPressInfo:(id)a0;
- (long long)_responderForwardableType;
- (BOOL)_isDirectionalPress;
- (BOOL)_isSynthetic;
- (void)_removeGestureRecognizer:(id)a0;
- (void)_loadStateFromPress:(id)a0;
- (id)_mutableForwardingRecord;
- (void)_abandonForwardingRecord;
- (void).cxx_destruct;
- (id)_forwardingRecord;
- (BOOL)_isAbandoningForwardingRecord;
- (SEL)_responderSelectorForPhase:(long long)a0;
- (BOOL)_wantsForwardingFromResponder:(id)a0 toNextResponder:(id)a1 withEvent:(id)a2;
- (id)_phaseDescription;

@end
