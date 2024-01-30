@class NSString, TVRCPINEntryAttributes, RTIDataPayload;

@interface TVRCKeyboardAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryAttributes;
@property (retain, nonatomic) RTIDataPayload *rtiDataPayload;
@property (nonatomic, getter=_isLikelyPINEntry, setter=_setLikelyPINEntry:) BOOL likelyPINEntry;
@property (nonatomic, getter=_isSecure, setter=_setSecure:) BOOL secure;
@property (nonatomic, getter=_enablesReturnKeyAutomatically, setter=_setEnablesReturnKeyAutomatically:) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=_keyboardType, setter=_setKeyboardType:) long long keyboardType;
@property (nonatomic, getter=_returnKeyType, setter=_setReturnKeyType:) long long returnKeyType;
@property (nonatomic, getter=_autocapitalizationType, setter=_setAutocapitalizationType:) long long autocapitalizationType;
@property (nonatomic, getter=_autocorrectionType, setter=_setAutocorrectionType:) long long autocorrectionType;
@property (nonatomic, getter=_spellCheckingType, setter=_setSpellCheckingType:) long long spellCheckingType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAttributes:(id)a0;
- (void)applyToTextField:(id)a0;

@end
