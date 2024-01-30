@class OADParagraph;

@interface PMParagraphMapper : CMMapper {
    OADParagraph *mParagraph;
}

- (void).cxx_destruct;
- (id)fontScheme;
- (id)initWithOadParagraph:(id)a0 parent:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1 isFirstParagraph:(BOOL)a2;
- (id)copyParagraphStyleWithState:(id)a0 isFirstParagraph:(BOOL)a1;
- (void)addEndCharacterStyleToStyle:(id)a0;
- (int)firstTextRunFontSize;

@end
