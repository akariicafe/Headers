@class NSString;

@interface UIKey : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic, setter=_setUnmodifiedInput:) NSString *unmodifiedInput;
@property (retain, nonatomic, setter=_setModifiedInput:) NSString *modifiedInput;
@property (nonatomic, setter=_setModifierFlags:) long long modifierFlags;
@property (nonatomic, setter=_setKeyCode:) long long keyCode;
@property (readonly, nonatomic) NSString *characters;
@property (readonly, nonatomic) NSString *charactersIgnoringModifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)modifiersEqual:(long long)a0;
- (id)_initWithKey:(id)a0;
- (BOOL)equalsKeyCode:(long long)a0 modifiers:(long long)a1;
- (id)initWithKeyboardEvent:(id)a0;
- (long long)modiferFlagsWithoutCapsLockOrNumberPad;
- (BOOL)unmodifiedKeyCodeEquals:(long long)a0;

@end
