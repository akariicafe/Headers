@class GCController, NSString, NSMutableDictionary, NSMutableSet, GCControllerElement, GCMotion, GCControllerSettings;
@protocol NSSecureCoding, GCDevice, NSCopying, NSObject;

@interface GCPhysicalInputProfile : NSObject <GCNamedProfile, GCControllerComponent> {
    id<GCDevice> _device;
    GCMotion *_motion;
    GCControllerElement *_remappedElements[41];
    GCControllerSettings *_appliedSettings;
}

@property (readonly) NSString *name;
@property (retain) GCMotion *_motion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GCControllerSettings *bundleSettings;
@property (retain, nonatomic) GCControllerSettings *defaultSettings;
@property (retain, nonatomic) NSMutableDictionary *elements;
@property (retain, nonatomic) NSMutableDictionary *buttons;
@property (retain, nonatomic) NSMutableDictionary *axes;
@property (retain, nonatomic) NSMutableDictionary *dpads;
@property (retain, nonatomic) NSMutableSet *allElements;
@property (retain, nonatomic) NSMutableSet *allButtons;
@property (retain, nonatomic) NSMutableSet *allAxes;
@property (retain, nonatomic) NSMutableSet *allDpads;
@property double lastEventTimestamp;
@property (retain, nonatomic) NSMutableSet *_topLevelElements;
@property (retain, nonatomic) NSMutableSet *_topLevelButtons;
@property (retain, nonatomic) NSMutableSet *_topLevelDirectionPads;
@property (retain, nonatomic) NSMutableSet *_topLevelTouchpads;
@property (readonly, weak, nonatomic) GCController *controller;
@property (weak, nonatomic) id<GCDevice> device;
@property (readonly) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned int)sampleRate;
- (id)init;
- (void).cxx_destruct;
- (void)setPlayerIndex:(long long)a0;
- (void)setController:(id)a0;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)capture;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithController:(id)a0;
- (void)applySettings:(id)a0;
- (void)appDidBecomeActive;
- (id)productCategory;
- (id)_buttonWithInfo:(struct { id x0; BOOL x1; BOOL x2; union { struct { int x0; BOOL x1; float x2; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; id x8; id x9; })a0;
- (id)_directionPadWithInfo:(struct { id x0; BOOL x1; BOOL x2; union { struct { int x0; BOOL x1; float x2; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; id x8; id x9; })a0;
- (id /* block */)valueChangedHandler;
- (void)setButton:(id)a0 value:(double)a1;
- (void)appWillResignActive;
- (void)setDpad:(id)a0 x:(double)a1 y:(double)a2;
- (void)setButton:(id)a0 pressed:(BOOL)a1;
- (id)_cursorWithInfo:(struct { id x0; BOOL x1; BOOL x2; union { struct { int x0; BOOL x1; float x2; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; id x8; id x9; })a0;
- (void)_receivedEvent;
- (void)setDefaultSettings:(id)a0 bundleSettings:(id)a1;
- (void)_triggerValueChangedHandlerForElement:(id)a0 queue:(id)a1;
- (id)remappedElementForIndex:(long long)a0;
- (void)updateElementControllerReferences;
- (void)_registerTopLevelDirectionPad:(id)a0;
- (void)_registerTopLevelButton:(id)a0;
- (void)_registerTouchpad:(id)a0;
- (void)_registerButton:(id)a0;
- (void)_registerDirectionPad:(id)a0;
- (void)_registerAxis:(id)a0;
- (id)_touchpadWithInfo:(struct { id x0; BOOL x1; BOOL x2; union { struct { int x0; BOOL x1; float x2; } x0; struct { int x0; int x1; int x2; int x3; } x1; } x3; int x4; BOOL x5; BOOL x6; BOOL x7; id x8; id x9; })a0;
- (void)_registerTopLevelTouchpad:(id)a0;
- (void)setStateFromPhysicalInput:(id)a0;

@end
