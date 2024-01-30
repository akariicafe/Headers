@class WDText, WDCharacterRun;

@interface WDNote : WDRun {
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mAutomaticNumbering;
}

- (void).cxx_destruct;
- (id)text;
- (id)description;
- (id)reference;
- (int)runType;
- (void)setAutomaticNumbering:(BOOL)a0;
- (BOOL)automaticNumbering;
- (id)initWithParagraph:(id)a0 footnote:(BOOL)a1;

@end
