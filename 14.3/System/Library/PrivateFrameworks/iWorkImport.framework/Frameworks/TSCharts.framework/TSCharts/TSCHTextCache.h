@class TSUCache;

@interface TSCHTextCache : NSObject {
    TSUCache *mTSWPTextCache;
    TSUCache *mTSWPColumnCache;
    TSUCache *mNumberWidthCache;
    TSUCache *mEqualDigitWidthFont;
}

- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)textForKey:(id)a0;
- (void)setText:(id)a0 forKey:(id)a1;
- (id)columnForKey:(id)a0;
- (void)setColumn:(id)a0 forKey:(id)a1;
- (id)numberStringSizeForKey:(id)a0;
- (void)setNumberStringSize:(id)a0 forKey:(id)a1;
- (id)equalDigitWidthForFontName:(id)a0;
- (void)setEqualDigitWidth:(id)a0 forFontName:(id)a1;

@end
