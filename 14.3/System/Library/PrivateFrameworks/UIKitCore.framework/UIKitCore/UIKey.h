@class NSString;

@interface UIKey : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic, setter=_setUnmodifiedInput:) NSString *unmodifiedInput;
@property (retain, nonatomic, setter=_setModifiedInput:) NSString *modifiedInput;
@property (nonatomic, setter=_setModifierFlags:) long long modifierFlags;
@property (nonatomic, setter=_setKeyCode:) long long keyCode;
@property (readonly, nonatomic) NSString *characters;
@property (readonly, nonatomic) NSString *charactersIgnoringModifiers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithKey:(id)a0;
- (long long)modiferFlagsWithoutCapsLockOrNumberPad;
- (id)initWithKeyboardEvent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)unmodifiedKeyCodeEquals:(long long)a0;
- (BOOL)modifiersEqual:(long long)a0;
- (BOOL)equalsKeyCode:(long long)a0 modifiers:(long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
