@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short keyCode;
@property (nonatomic) unsigned short alternativeKeyCode;
@property (nonatomic) unsigned int usagePage;
@property (nonatomic) BOOL keyDown;
@property (copy, nonatomic) NSString *unmodifiedInput;
@property (copy, nonatomic) NSString *modifiedInput;
@property (copy, nonatomic) NSString *shiftModifiedInput;
@property (nonatomic) unsigned int modifierState;
@property (copy, nonatomic) NSString *backupUnmodifiedInput;
@property (copy, nonatomic) NSString *backupModifiedInput;
@property (copy, nonatomic) NSString *backupShiftModifiedInput;
@property (nonatomic) unsigned int gsModifierState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned char)_getIOHIDKeyboardTypeForGSKeyboardType:(unsigned char)a0;
+ (struct __GSKeyboard { } *)_getUIKitKeyboardRef;
+ (struct __GSKeyboard { } *)_getUSUIKitKeyboardRef;
+ (void)prepareForKeycodeTranslation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (struct __GSKeyboard { } *)_getUIKitKeyboardRef;
- (struct __GSKeyboard { } *)_getUSUIKitKeyboardRef;
- (id)accessibilityEventRepresentationTabularDescription;
- (void)translateKeycode;
- (void)translateStringToKeycode;

@end
