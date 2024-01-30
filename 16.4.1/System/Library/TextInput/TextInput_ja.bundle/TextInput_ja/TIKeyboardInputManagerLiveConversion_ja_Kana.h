@interface TIKeyboardInputManagerLiveConversion_ja_Kana : TIKeyboardInputManagerLiveConversion_ja

+ (Class)wordSearchClass;

- (id)inputString;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)_deleteFromInput;
- (void)calculateGeometryForInput:(id)a0;
- (id)displayStringForSearch;
- (id)hiraganaStringFor:(id)a0;
- (id)rawInputStringFrom:(id)a0;
- (id)segmentAdjustInputManager:(unsigned long long)a0;

@end
