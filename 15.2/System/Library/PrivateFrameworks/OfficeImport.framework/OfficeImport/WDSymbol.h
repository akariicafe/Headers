@class WDFont;

@interface WDSymbol : WDRunWithCharacterProperties {
    WDFont *mFont;
    unsigned short mCharacter;
}

- (void)setFont:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)font;
- (int)runType;
- (unsigned short)character;
- (void)setCharacter:(unsigned short)a0;
- (id)initWithParagraph:(id)a0;

@end
