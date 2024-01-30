@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}

- (BOOL)isEmpty;
- (id)init;
- (id)properties;
- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (id)description;
- (void)applyProperties:(id)a0;
- (id)plainText;
- (unsigned long long)textRunCount;
- (id)textRunAtIndex:(unsigned long long)a0;
- (id)paragraphEndCharacterProperties;
- (id)addRegularTextRun;
- (id)addTextLineBreak;
- (id)addDateTimeFieldWithFormat:(int)a0;
- (id)addGenericTextFieldWithGuid:(id)a0 type:(id)a1;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)a0;
- (void)removeAllTextRuns;
- (unsigned long long)lineBreakCount;
- (id)addFooterField;
- (void)setParagraphEndCharacterProperties:(id)a0;
- (BOOL)hasBulletCharacterProperties;
- (id)bulletCharacterProperties;
- (BOOL)isSimilarToParagraph:(id)a0;
- (id)findFirstTextRunOfClass:(Class)a0;
- (id)addSlideNumberField;

@end
