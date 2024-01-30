@class AXElement, NSString, SRCSTextEditing, CACSpokenCommand;

@interface CACTextEditingProvider : NSObject <SRCSTextEditingProviderProtocol> {
    CACSpokenCommand *_spokenCommand;
    AXElement *_axElement;
}

@property (readonly) SRCSTextEditing *textEditingEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (void)deleteText;
- (void)setCompletionDeterminedManually:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isNextPreviousResolverSpokenCommandEmojiBased;
- (BOOL)isVisibleTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isVisibleTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)deleteTextAtTextMarkerRange:(id)a0;
- (id)markerRangeForEnumerationType:(long long)a0 desiredBlock:(int)a1 count:(unsigned long long)a2 options:(int)a3;
- (id)actOnStrings:(id)a0 ambiguityResolution:(id)a1 substringSearchGranularity:(int)a2 alwaysCallActionOnClosestMatch:(BOOL)a3 options:(id)a4 actionBlock:(id /* block */)a5;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeFromPreviousTextInsertionForAXElement:(id)a0;
- (id)_nBestListFromPreviousTextInsertionForAXElement:(id)a0;
- (id)stringForTextMarkerRange:(id)a0;
- (id)selectionTextMarkerRange;
- (Class)textMarkerClass;
- (Class)textMarkerRangeClass;
- (void)formatSelectionBold;
- (void)formatSelectionItalics;
- (void)formatSelectionUnderline;
- (void)performTextCopy;
- (void)performTextCut;
- (void)performTextPaste;
- (void)performTextUndo;
- (void)performTextRedo;
- (void)performTextSelectAll;
- (id)firstPositionTextMarker;
- (id)lastPositionTextMarker;
- (id)markerRangeForLineAtTextMarker:(id)a0;
- (void)setSelectionToTextMarkerRange:(id)a0;
- (id)textMarkerRangeFromPreviousTextInsertion;
- (id)nBestListFromPreviousTextInsertion;
- (int)searchGranularity;
- (id)emojisMatchingTextInStrings:(id)a0;
- (BOOL)isTextDisambiguationSupported;
- (BOOL)shouldInsertInterWordSpaces;
- (void)handleTextDisambiguationWithPhraseMatchResults:(id)a0 actionBlock:(id /* block */)a1;
- (void)handleSearchResultsWithRecognizedCommandParameters:(id)a0 variantOverrides:(id)a1;
- (void)handleErrorIdentifier:(id)a0 withObjects:(id)a1;
- (void)handleCorrectionRequestWithStrings:(id)a0;
- (void)insertString:(id)a0;
- (void)insertAttributedString:(id)a0;
- (void)registerInsertedStringCategoryIdentifer:(id)a0;
- (id)initWithSpokenCommand:(id)a0 axElement:(id)a1;
- (void)applyFormat;

@end
