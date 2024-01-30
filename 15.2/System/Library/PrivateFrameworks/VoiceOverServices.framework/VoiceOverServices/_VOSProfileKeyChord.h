@class _VOSProfileCommand, AXSSKeyChord;

@interface _VOSProfileKeyChord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AXSSKeyChord *keyChord;
@property (weak, nonatomic) _VOSProfileCommand *command;

+ (id)profileKeyChordWithKeyChord:(id)a0;
+ (id)profileKeyChordWithStringValue:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithKeyChord:(id)a0;

@end
