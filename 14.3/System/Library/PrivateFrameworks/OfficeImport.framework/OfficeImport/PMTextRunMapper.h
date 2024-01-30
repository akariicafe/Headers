@class OADTextRun;

@interface PMTextRunMapper : CMMapper {
    OADTextRun *mTextRun;
}

- (void).cxx_destruct;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)initWithOadTextRun:(id)a0 parent:(id)a1;
- (id)fontScheme;
- (id)copyCharacterStyleWithState:(id)a0;
- (void)addFontForLanguageType:(int)a0 toCharacterStyle:(id)a1;
- (BOOL)_isDefaultFill:(id)a0;

@end
