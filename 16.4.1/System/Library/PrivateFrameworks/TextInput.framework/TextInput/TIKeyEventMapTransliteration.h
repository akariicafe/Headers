@interface TIKeyEventMapTransliteration : TIKeyEventMap

+ (BOOL)supportsSecureCoding;

- (id)remapKeyWithString:(id)a0 stringWithoutModifiers:(id)a1 modifierFlags:(unsigned long long)a2 keyboardState:(id)a3;

@end
