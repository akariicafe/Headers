@class NSString;

@interface UIPhysicalKeyboardEvent : UIPressesEvent {
    BOOL _canPrivatize;
}

@property (retain, nonatomic) NSString *_modifiedInput;
@property (retain, nonatomic) NSString *_unmodifiedInput;
@property (retain, nonatomic) NSString *_shiftModifiedInput;
@property (retain, nonatomic) NSString *_commandModifiedInput;
@property (retain, nonatomic) NSString *_privateShiftModifiedInput;
@property (retain, nonatomic) NSString *_markedInput;
@property (retain, nonatomic) NSString *_privateInput;
@property (retain, nonatomic) NSString *_hint;
@property (nonatomic) long long _modifierFlags;
@property (nonatomic) long long _privateModifierFlags;
@property (readonly, nonatomic) long long _gsModifierFlags;
@property (readonly, nonatomic) BOOL _isKeyDown;
@property (readonly, nonatomic) BOOL _isGlobeKey;
@property (readonly, nonatomic) BOOL _isEjectKey;
@property (readonly, nonatomic) BOOL _isModifierKey;
@property (readonly, nonatomic) BOOL _isARepeat;
@property (nonatomic) long long _keyCode;
@property (nonatomic) int _inputFlags;
@property (nonatomic) long long source;
@property (nonatomic, getter=_isExternalEvent) BOOL _externalEvent;

+ (id)_eventWithInput:(id)a0 inputFlags:(int)a1;

- (id)_cloneEvent;
- (BOOL)_shouldAttemptSecurePasteAuthentication;
- (BOOL)_isPhysicalKeyEvent;
- (long long)modifierFlags;
- (BOOL)_matchesKeyCommand:(id)a0 usesPrivateShiftModifiedInput:(BOOL)a1;
- (void)_privatize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0 keyboard:(struct __GSKeyboard { } *)a1;
- (long long)type;

@end
