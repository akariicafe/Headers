@class OADTextBodyProperties, NSMutableArray, OADTextListStyle;

@interface OADTextBody : NSObject {
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}

- (void)setProperties:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (id)properties;
- (void).cxx_destruct;
- (id)description;
- (id)plainText;
- (unsigned long long)paragraphCount;
- (id)paragraphAtIndex:(unsigned long long)a0;
- (id)addParagraph;
- (id)overrideTextListStyle;
- (id)textListStyle;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0 ownTextListStyle:(BOOL)a1;
- (void)flattenProperties;
- (BOOL)propagateActualTextStyleToTextListStyle;
- (unsigned long long)nonEmptyParagraphCount;
- (void)removeAllParagraphs;
- (unsigned long long)newLineCount;
- (id)firstParagraphEffects;
- (void)applyTextListStyle:(id)a0;
- (void)removeTrailingNewlines;
- (void)removeLeadingNewlines;
- (void)removeLastParagraphIfEmpty;
- (BOOL)isSimilarToTextBody:(id)a0;
- (void)addParagraphsFromTextBody:(id)a0;
- (id)findFirstTextRunOfClass:(Class)a0;

@end
