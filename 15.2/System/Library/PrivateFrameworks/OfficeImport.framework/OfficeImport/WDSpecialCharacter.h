@interface WDSpecialCharacter : WDRunWithCharacterProperties {
    int mType;
}

- (id)description;
- (int)runType;
- (int)characterType;
- (id)initWithParagraph:(id)a0;
- (void)setCharacterType:(int)a0;

@end
