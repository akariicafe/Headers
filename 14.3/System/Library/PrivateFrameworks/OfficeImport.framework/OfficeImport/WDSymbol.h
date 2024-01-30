@class WDFont;

@interface WDSymbol : WDRunWithCharacterProperties {
    WDFont *mFont;
    unsigned short mCharacter;
}

- (id)font;
- (void).cxx_destruct;
- (unsigned short)character;
- (void)setCharacter:(unsigned short)a0;
- (void)setFont:(id)a0;
- (id)description;
- (int)runType;
- (id)initWithParagraph:(id)a0;

@end
