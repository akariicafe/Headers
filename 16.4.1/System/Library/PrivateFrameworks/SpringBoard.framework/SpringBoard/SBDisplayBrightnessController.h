@class NSString, SBHIDValueModifyingButtonSetArbiter, SBUIViewFloatSpringProperty;
@protocol SBBrightnessRouteCoordinating;

@interface SBDisplayBrightnessController : NSObject <SBHIDValueModifyingButtonSetArbiterDelegate, SBBrightnessRouteControlling> {
    struct BKSDisplayBrightnessTransaction { } *_brightnessTransaction;
    id<SBBrightnessRouteCoordinating> _coordinator;
    SBHIDValueModifyingButtonSetArbiter *_buttonArbiter;
    SBUIViewFloatSpringProperty *_brightnessProperty;
}

@property (class, readonly, nonatomic) BOOL handlesKeyCommands;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float brightnessLevel;

- (id)initWithCoordinator:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_beginBrightnessTransaction;
- (void)_completeBrightnessTransaction;
- (float)_effectiveCurrentTargetBrightness;
- (BOOL)_isBrightnessPropertyRunning;
- (void)_setBrightnessLevel:(float)a0 animated:(BOOL)a1;
- (long long)brightnessRouteType;
- (void)buttonSetArbiter:(id)a0 performActionForButtonPage:(unsigned short)a1 usage:(unsigned short)a2;
- (void)buttonSetArbiterDidReset:(id)a0;
- (void)cancelBrightnessKeyPressEvent;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { } *)a0;
- (void)noteValueUpdatesDidEnd;
- (void)noteValueUpdatesWillBegin;
- (BOOL)setBrightnessLevel:(float)a0 animated:(BOOL)a1;

@end
