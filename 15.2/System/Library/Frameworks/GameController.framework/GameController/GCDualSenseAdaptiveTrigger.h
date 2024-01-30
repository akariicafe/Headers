@class _GCControllerManagerAppClient;
@protocol GCAdaptiveTriggers, GCControllerHIDInfo;

@interface GCDualSenseAdaptiveTrigger : GCControllerButtonInput {
    _GCControllerManagerAppClient *_controllerManagerApp;
    id<GCControllerHIDInfo> _hidInfo;
    id<GCAdaptiveTriggers> _adaptiveTriggers;
}

@property (nonatomic) int index;
@property (nonatomic) long long mode;
@property (nonatomic) long long status;
@property (nonatomic) float armPosition;

- (void)updateStatus;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)stopObservingChangesForAdaptiveTriggers:(id)a0;
- (void)sendAdaptiveTriggerPayload:(id)a0;
- (void)observeChangesForAdaptiveTriggers:(id)a0;
- (void)locateAdaptiveTriggerComponent;
- (void)locateControllerManagerApp;
- (void)setModeFeedbackWithStartPosition:(float)a0 resistiveStrength:(float)a1;
- (void)setModeWeaponWithStartPosition:(float)a0 endPosition:(float)a1 resistiveStrength:(float)a2;
- (void)setModeVibrationWithStartPosition:(float)a0 amplitude:(float)a1 frequency:(float)a2;
- (void)setModeOff;
- (void)sendAdaptiveTriggerPayloadDict:(id)a0;

@end
