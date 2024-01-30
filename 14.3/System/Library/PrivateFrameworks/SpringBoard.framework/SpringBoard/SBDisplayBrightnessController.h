@class NSString, SBHIDValueModifyingButtonSetArbiter;

@interface SBDisplayBrightnessController : NSObject <SBHIDValueModifyingButtonSetArbiterDelegate> {
    struct BKSDisplayBrightnessTransaction { } *_brightnessTransaction;
    SBHIDValueModifyingButtonSetArbiter *_buttonArbiter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setBrightnessLevel:(float)a0;
- (void)handleBrightnessKeyPressEvent:(struct __IOHIDEvent { } *)a0;
- (void)cancelBrightnessEvent;
- (void)_setBrightnessLevel:(float)a0 showHUD:(BOOL)a1;
- (void)_adjustBacklightLevel:(BOOL)a0;
- (void)buttonSetArbiter:(id)a0 performActionForButtonPage:(unsigned short)a1 usage:(unsigned short)a2;
- (void)buttonSetArbiterDidReset:(id)a0;

@end
