@interface TIKeyEventMap_zh : TIKeyEventMap

+ (id)sharedInstance;
+ (BOOL)supportsSecureCoding;
+ (id)punctuationMap_zh_Hans;
+ (id)punctuationMap_zh_Hant;

- (id)remapKeyWithString:(id)a0 stringWithoutModifiers:(id)a1 modifierFlags:(unsigned long long)a2 keyboardState:(id)a3;
- (id)punctuationMap;
- (BOOL)isURLOrEmailKeyboardInKeyboardState:(id)a0;

@end
