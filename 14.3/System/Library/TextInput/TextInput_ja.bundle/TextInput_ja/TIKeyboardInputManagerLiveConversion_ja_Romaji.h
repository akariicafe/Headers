@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManagerLiveConversion_ja_Romaji : TIKeyboardInputManagerLiveConversion_ja {
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

@property (readonly, nonatomic) NSMutableArray *externalIndexToInternalIndexMappingArray;
@property (nonatomic) unsigned long long externalInputIndex;
@property (copy, nonatomic) NSString *externalString;

+ (Class)wordSearchClass;

- (id)searchStringForMarkedText;
- (void)clearInput;
- (void)setInputIndex:(unsigned int)a0;
- (void)updateState;
- (void).cxx_destruct;
- (void)dealloc;
- (id)inputString;
- (void)setInput:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)inputLocationChanged;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)displayStringForSearch;
- (id)rawInputStringFrom:(id)a0;
- (id)hiraganaStringFor:(id)a0;
- (id)segmentAdjustInputManager:(unsigned long long)a0;
- (id)transliterate:(id)a0;
- (void)_addInput:(id)a0;

@end
