@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}

- (BOOL)isEmpty;
- (id)properties;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (void)applyProperties:(id)a0;
- (id)plainText;
- (id)paragraphEndCharacterProperties;
- (id)textRunAtIndex:(unsigned long long)a0;
- (id)addDateTimeFieldWithFormat:(int)a0;
- (id)addFooterField;
- (id)addGenericTextFieldWithGuid:(id)a0 type:(id)a1;
- (id)addRegularTextRun;
- (id)addSlideNumberField;
- (id)addTextLineBreak;
- (id)bulletCharacterProperties;
- (void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (id)findFirstTextRunOfClass:(Class)a0;
- (BOOL)hasBulletCharacterProperties;
- (BOOL)isSimilarToParagraph:(id)a0;
- (unsigned long long)lineBreakCount;
- (void)removeAllTextRuns;
- (void)removeUnnecessaryOverrides;
- (void)setParagraphEndCharacterProperties:(id)a0;
- (void)setParentTextListStyle:(id)a0;
- (unsigned long long)textRunCount;

@end
