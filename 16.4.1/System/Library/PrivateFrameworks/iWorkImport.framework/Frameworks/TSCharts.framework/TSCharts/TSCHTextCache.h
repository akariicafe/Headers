@class TSUCache;

@interface TSCHTextCache : NSObject {
    TSUCache *_TSWPTextCache;
    TSUCache *_TSWPColumnCache;
    TSUCache *_numberWidthCache;
    TSUCache *_equalDigitWidthFont;
}

- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (void)setEqualDigitWidth:(id)a0 forFontName:(id)a1;
- (id)columnForKey:(id)a0;
- (id)equalDigitWidthForFontName:(id)a0;
- (id)numberStringSizeForKey:(id)a0;
- (void)setColumn:(id)a0 forKey:(id)a1;
- (void)setNumberStringSize:(id)a0 forKey:(id)a1;
- (void)setText:(id)a0 textDelegate:(id)a1 forKey:(id)a2;
- (id)textForKey:(id)a0;

@end
