@class NSString;

@interface BKSHIDEventKeyCommand : NSObject <NSSecureCoding, BSDescriptionStreamable, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *unmodifiedInput;
@property (retain, nonatomic) NSString *shiftModifiedInput;
@property (retain, nonatomic) NSString *commandModifiedInput;
@property (nonatomic) long long usagePage;
@property (readonly) BOOL isRoutableKeyCommand;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) long long keyCode;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) BOOL isTextualKeyCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyCommandWithInput:(id)a0 modifierFlags:(long long)a1;
+ (id)keyCommandForEvent:(struct __IOHIDEvent { } *)a0 gsKeyboard:(struct __GSKeyboard { } *)a1 activeModifiers:(long long *)a2;
+ (id)keyCommandWithKeyCode:(long long)a0 modifierFlags:(long long)a1;
+ (BOOL)_isModifierKeyWithPage:(long long)a0 usage:(long long)a1;
+ (id)descriptorWithKeyCode:(long long)a0 modifierFlags:(long long)a1;
+ (id)descriptorWithInput:(id)a0 modifierFlags:(long long)a1;
+ (BOOL)_shouldMatchKeyCommandsForEvent:(struct __IOHIDEvent { } *)a0 gsKeyboard:(struct __GSKeyboard { } *)a1;
+ (id)keyCommandForEvent:(struct __IOHIDEvent { } *)a0 gsKeyboard:(struct __GSKeyboard { } *)a1;

- (long long)describes:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_appendPropertiesCommon:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isModifierOnlyCommand;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithInput:(id)a0 keyCode:(long long)a1 modifierFlags:(long long)a2;
- (id)_sanitizedInputForDescription;
- (void)appendDescriptionToFormatter:(id)a0;

@end
