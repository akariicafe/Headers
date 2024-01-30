@class WDFont;

@interface WDSymbol : WDRunWithCharacterProperties {
    WDFont *mFont;
    unsigned short mCharacter;
}

- (id)font;
- (void)setFont:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned short)character;
- (void)setCharacter:(unsigned short)a0;
- (id)initWithParagraph:(id)a0;
- (int)runType;

@end
