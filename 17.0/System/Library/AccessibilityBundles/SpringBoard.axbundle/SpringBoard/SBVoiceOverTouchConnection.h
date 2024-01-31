@class SBVoiceOverTouchLabelElementAlertItem;

@interface SBVoiceOverTouchConnection : NSObject {
    struct __CFMachPort { } *_votMachPort;
    SBVoiceOverTouchLabelElementAlertItem *_labelAlert;
}

@property (nonatomic) BOOL inVoiceOverPassthroughMode;
@property (nonatomic) BOOL screenCurtainEnabled;
@property (readonly, nonatomic) BOOL elementLabelerVisible;

+ (id)defaultConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_registerVOTConnectionWithPort:(unsigned int)a0;
- (void)_dismissLabelAlert;
- (void)_programmaticAppSwitch:(BOOL)a0;
- (void)_registerForMachConnection;
- (void)setLabelElementPanelVisible:(BOOL)a0 initialValue:(id)a1;
- (void)setScreenCurtainEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)tearDownVoiceOverTouchConnection;
- (BOOL)voiceOverTouchLabelElementAlertItem:(id)a0 textFieldShouldReturn:(id)a1;
- (void)voiceOverTouchLabelElementAlertItemDidAccept:(id)a0 withTextField:(id)a1;
- (void)voiceOverTouchLabelElementAlertItemDidCancel:(id)a0;

@end
