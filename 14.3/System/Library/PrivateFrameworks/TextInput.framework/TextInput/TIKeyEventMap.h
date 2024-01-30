@interface TIKeyEventMap : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)inputEventForInputString:(id)a0 stringWithoutModifiers:(id)a1 modifierFlags:(unsigned long long)a2 keyboardState:(id)a3;
- (id)remapKeyWithString:(id)a0 stringWithoutModifiers:(id)a1 modifierFlags:(unsigned long long)a2 keyboardState:(id)a3;
- (long long)candidateNumberKey:(int)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
