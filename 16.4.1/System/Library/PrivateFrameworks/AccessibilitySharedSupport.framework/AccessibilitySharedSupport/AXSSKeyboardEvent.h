@class NSString, AXSSKeyChord;

@interface AXSSKeyboardEvent : NSObject <NSCopying>

@property (nonatomic) unsigned long long keyCode;
@property (copy, nonatomic) NSString *unicodeCharacter;
@property (copy, nonatomic) NSString *backupUnicodeCharacter;
@property (nonatomic) BOOL isDownEvent;
@property (nonatomic) BOOL isRepeatEvent;
@property (nonatomic) BOOL isModifierChangedEvent;
@property (readonly, nonatomic) BOOL isCommandDown;
@property (nonatomic) BOOL isLeftCommandDown;
@property (nonatomic) BOOL isRightCommandDown;
@property (readonly, nonatomic) BOOL isOptionDown;
@property (nonatomic) BOOL isLeftOptionDown;
@property (nonatomic) BOOL isRightOptionDown;
@property (readonly, nonatomic) BOOL isControlDown;
@property (nonatomic) BOOL isLeftControlDown;
@property (nonatomic) BOOL isRightControlDown;
@property (readonly, nonatomic) BOOL isShiftDown;
@property (nonatomic) BOOL isLeftShiftDown;
@property (nonatomic) BOOL isRightShiftDown;
@property (nonatomic) BOOL isCapsLockDown;
@property (nonatomic) BOOL isFnDown;
@property (readonly, nonatomic) long long modifierMask;
@property (readonly, nonatomic) AXSSKeyChord *keyChord;
@property (readonly, nonatomic) AXSSKeyChord *backupKeyChord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_keyChordForUnicodeCharacter:(id)a0;

@end
