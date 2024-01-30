@class WDText, WDCharacterRun;

@interface WDNote : WDRun {
    WDText *mText;
    WDCharacterRun *mReference;
    BOOL mAutomaticNumbering;
}

- (id)reference;
- (id)description;
- (void).cxx_destruct;
- (id)text;
- (int)runType;
- (void)setAutomaticNumbering:(BOOL)a0;
- (BOOL)automaticNumbering;
- (id)initWithParagraph:(id)a0 footnote:(BOOL)a1;

@end
