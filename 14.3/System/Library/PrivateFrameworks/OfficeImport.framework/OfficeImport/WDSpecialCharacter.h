@interface WDSpecialCharacter : WDRunWithCharacterProperties {
    int mType;
}

- (int)characterType;
- (id)description;
- (int)runType;
- (id)initWithParagraph:(id)a0;
- (void)setCharacterType:(int)a0;

@end
