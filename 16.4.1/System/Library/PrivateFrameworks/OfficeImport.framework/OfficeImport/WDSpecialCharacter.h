@interface WDSpecialCharacter : WDRunWithCharacterProperties {
    int mType;
}

- (id)description;
- (int)characterType;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (void)setCharacterType:(int)a0;

@end
