@class NSDictionary, RTIInputSystemSourceSession, UITextPosition, UITextInputTraits, UITextChecker, UITextRange, NSString, UIImage, UIResponder, NSAttributedString, NSArray, UITextPlaceholder, UIInputContextHistory, UITextInputPasswordRules, UITextInteractionAssistant, _UITextServiceSession, _UITextUndoOperationTyping, NSSet, UIView, _UITextUndoManager, _UISupplementalLexicon, _UITextInputControllerTokenizer, UITextCheckingController, _UITextLayoutControllerBase, UIColor, NSIndexSet, NSLayoutManager, NSHashTable;
@protocol UITextInput, UITextInputSuggestionDelegate, UITextInputDelegate, UITextInputPrivate, _UITextLayoutController, UITextInputControllerDelegate, UITextInputTokenizer;

@interface UITextInputController : NSObject <UITextInput_Internal, UITextInput, UITextInputAdditions, UIResponderStandardEditActions, UITextInputPrivate> {
    id<UITextInputDelegate> _inputDelegate;
    UITextRange *_selectedTextRange;
    _UITextInputControllerTokenizer *_tokenizer;
    NSLayoutManager *_layoutManager;
    NSHashTable *_observedScrollViews;
    _UITextServiceSession *_learnSession;
    _UITextServiceSession *_shareSession;
    _UITextServiceSession *_lookupSession;
    _UITextServiceSession *_translateSession;
    UITextInputTraits *_textInputTraits;
    struct _NSRange { unsigned long long location; unsigned long long length; } _markedTextRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _markedTextSelection;
    NSDictionary *_markedTextStyle;
    NSAttributedString *_markedText;
    struct { unsigned char delegateRespondsToTextInputShouldBeginEditing : 1; unsigned char delegateRespondsToTextInputShouldChangeCharactersInRangeReplacementText : 1; unsigned char delegateRespondsToTextInputDidChange : 1; unsigned char delegateRespondsToTextInputDidChangeSelection : 1; unsigned char delegateRespondsToTextInputWillChangeSelectionFromCharacterRangeToCharacterRange : 1; unsigned char delegateRespondsToTextInputEditorDidChangeSelection : 1; unsigned char delegateRespondsToTextInputPrepareAttributedTextForInsertion : 1; unsigned char delegateRespondsToTextInputShouldExtendCaretHeight : 1; unsigned char delegateRespondsToIsSingleLine : 1; unsigned char textOrSelectionChangeOriginatesWithKeyboard : 1; unsigned char showingTextStyleOptions : 1; unsigned char undoRedoInProgress : 1; unsigned char textOrSelectionChangeOriginatesWithMarkedText : 1; unsigned char nextSelectionChangeMustUpdate : 1; unsigned char hasTextAlternatives : 1; unsigned char hasDictationResultMetadata : 1; unsigned char suppressDelegateChangeNotifications : 1; } _tiFlags;
    NSArray *_extraItemsBeforeTextStyleOptions;
    UIView<UITextInput> *_firstTextView;
    _UITextUndoManager *_undoManager;
    _UITextUndoOperationTyping *_undoOperationForCoalescing;
    UITextChecker *_textChecker;
    UITextCheckingController *_textCheckingController;
    NSSet *_whitelistedTypingAttributes;
    unsigned long long _dontRemoveAllActionsCount;
    UITextPlaceholder *_textPlaceholder;
}

@property (readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property (readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (retain, nonatomic) UITextRange *previousSelectedTextRange;
@property (copy, nonatomic, getter=_emptyStringAttributes, setter=_setEmptyStringAttributes:) NSDictionary *emptyStringAttributes;
@property (nonatomic) int currentUndoGroupType;
@property (nonatomic) BOOL shouldStartUndoGroup;
@property (weak, nonatomic) _UITextLayoutControllerBase<_UITextLayoutController> *textLayoutController;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (weak, nonatomic) id<UITextInputControllerDelegate> delegate;
@property (nonatomic) BOOL continuousSpellCheckingEnabled;
@property (copy, nonatomic, getter=_whitelistedTypingAttributes, setter=_setWhitelistedTypingAttributes:) NSSet *_whitelistedTypingAttributes;
@property (readonly, nonatomic) NSAttributedString *filteredAttributedText;
@property (copy) UITextRange *selectedTextRange;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (weak, nonatomic) id<UITextInputDelegate> inputDelegate;
@property (readonly, nonatomic) id<UITextInputTokenizer> tokenizer;
@property (readonly, nonatomic) UIView *textInputView;
@property (nonatomic) long long selectionAffinity;
@property (readonly, nonatomic) id insertDictationResultPlaceholder;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (readonly, nonatomic, getter=_caretRect) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } caretRect;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) long long selectionGranularity;
@property (readonly, nonatomic) long long cursorBehavior;
@property (readonly, nonatomic) id<UITextInputSuggestionDelegate> textInputSuggestionDelegate;
@property (nonatomic) long long _textInputSource;
@property (readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property (readonly, nonatomic) BOOL supportsImagePaste;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } validTextRange;
@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic) struct __CFCharacterSet { } *textTrimmingSet;
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) double selectionBorderWidth;
@property (nonatomic) double selectionCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } selectionEdgeInsets;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (nonatomic) BOOL hasDefaultContents;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL showDictationButton;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceSpellingDictation;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL forceFloatingKeyboard;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } floatingKeyboardEdgeInsets;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) BOOL deferBecomingResponder;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (copy, nonatomic) NSString *responseContext;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) long long textScriptType;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property (retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL hidePrediction;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) long long preferredKeyboardStyle;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;

+ (BOOL)_shouldUseStandardTextScaling:(id)a0;

- (id)selectionView;
- (id)positionFromPosition:(id)a0 offset:(long long)a1;
- (void)_deleteToEndOfParagraph;
- (id)_moveLeft:(BOOL)a0 withHistory:(id)a1;
- (void)pasteAndMatchStyle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionClipRect;
- (id)_moveToEndOfLine:(BOOL)a0 withHistory:(id)a1;
- (void)alignRight:(id)a0;
- (id)characterRangeByExtendingPosition:(id)a0 inDirection:(long long)a1;
- (void)preheatTextChecker;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)a0;
- (void)_transliterateChinese:(id)a0;
- (BOOL)_shouldHandleResponderAction:(SEL)a0;
- (void)removeSpellingMarkersFromWordInRange:(id)a0;
- (unsigned int)_characterAfterCaretSelection;
- (void)changingContextWithTrigger:(id)a0;
- (void)checkSpellingForWordInRange:(id)a0;
- (void)selectAll:(id)a0;
- (id)_newAttributedStringForInsertionOfAttributedText:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_rangeSpanningTextUnit:(long long)a0 andPosition:(id)a1;
- (id)textChecker;
- (void)addTextAlternatives:(id)a0;
- (id)metadataDictionariesForDictationResults;
- (id)validAnnotations;
- (id)_postfixTokensForDictationAttributedText:(id)a0 currentDictationAttributedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 nextDictationAttributedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)increaseSize:(id)a0;
- (void)_clearSelectionUI;
- (void)_setSelectedTextRange:(id)a0 withAffinityDownstream:(BOOL)a1;
- (void)_pasteAndMatchStyle:(BOOL)a0;
- (id)_moveToEndOfParagraph:(BOOL)a0 withHistory:(id)a1;
- (BOOL)_delegateShouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (long long)_selectionAffinity;
- (void)endSelectionChange;
- (void)_insertDictationResult:(id)a0 withCorrectionIdentifier:(id)a1 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 resultLength:(unsigned long long *)a3;
- (unsigned int)_characterInRelationToCaretSelection:(int)a0;
- (void)_removeShareController;
- (id)_findDocumentBoundaryFromPosition:(id)a0;
- (void)select:(id)a0;
- (id)_selectedText;
- (void)makeTextWritingDirectionNatural:(id)a0;
- (void)selectAll;
- (void)toggleBoldface:(id)a0;
- (id)_rangeOfSmartSelectionIncludingRange:(id)a0;
- (long long)offsetFromPosition:(id)a0 toPosition:(id)a1;
- (id)_rectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isCoalescing;
- (void)_showTextStyleOptions:(id)a0;
- (BOOL)_isDisplayingLookupViewController;
- (void)makeTextWritingDirectionRightToLeft:(id)a0;
- (void)_deleteForwardByWord;
- (void)_deleteToEndOfLine;
- (id)_moveToStartOfDocument:(BOOL)a0 withHistory:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (BOOL)_selectionAtDocumentStart;
- (void)alignLeft:(id)a0;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)textStylingAtPosition:(id)a0 inDirection:(long long)a1;
- (void)_removeShortcutController;
- (id)_moveRight:(BOOL)a0 withHistory:(id)a1;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0 withinRange:(id)a1;
- (id)_moveUp:(BOOL)a0 withHistory:(id)a1;
- (void)toggleItalics:(id)a0;
- (id)_moveDown:(BOOL)a0 withHistory:(id)a1;
- (id)_textStorage;
- (id)_findPleasingWordBoundaryFromPosition:(id)a0;
- (void)makeTextWritingDirectionLeftToRight:(id)a0;
- (id)_moveToEndOfWord:(BOOL)a0 withHistory:(id)a1;
- (void)_setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)decreaseSize:(id)a0;
- (id)positionWithinRange:(id)a0 farthestInDirection:(long long)a1;
- (void)_deleteToStartOfLine;
- (id)_moveToEndOfDocument:(BOOL)a0 withHistory:(id)a1;
- (id)_positionFromPosition:(id)a0 inDirection:(long long)a1 offset:(long long)a2 withAffinityDownstream:(BOOL)a3;
- (void)undoWillChangeText;
- (id)positionFromPosition:(id)a0 inDirection:(long long)a1 offset:(long long)a2;
- (void)insertAttributedText:(id)a0;
- (id)_moveToStartOfLine:(BOOL)a0 withHistory:(id)a1;
- (void)_deleteByWord;
- (id)_moveToStartOfWord:(BOOL)a0 withHistory:(id)a1;
- (id)selectionRectsForRange:(id)a0;
- (id)characterRangeAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)replace:(id)a0;
- (void)_addToTypingAttributes:(id)a0 value:(id)a1;
- (void)_promptForReplace:(id)a0;
- (void)_invalidateTypingAttributes;
- (void)removeEmojiAlternatives;
- (void)toggleUnderline:(id)a0;
- (void)_setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)captureTextFromCamera:(id)a0;
- (void)beginSelectionChange;
- (BOOL)_canHandleResponderAction:(SEL)a0;
- (id)_positionWithinRange:(id)a0 farthestInDirection:(long long)a1;
- (void)_deleteBackwardAndNotify:(BOOL)a0;
- (id)_textRangeFromNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_moveToStartOfParagraph:(BOOL)a0 withHistory:(id)a1;
- (long long)baseWritingDirectionForPosition:(id)a0 inDirection:(long long)a1;
- (void)_transpose;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeForTextRange:(id)a0;
- (void)_addShortcut:(id)a0;
- (void)_replaceRange:(id)a0 withAttributedTextFromKeyboard:(id)a1 addingUnderlinesForAlternatives:(BOOL)a2;
- (void)cut:(id)a0;
- (id)_wordContainingCaretSelection;
- (void)coalesceInTextView:(id)a0 actionName:(id)a1 affectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 replacementText:(id)a4;
- (BOOL)_isSystemAttachment:(id)a0;
- (void)_insertText:(id)a0 fromKeyboard:(BOOL)a1;
- (void)checkSpellingForSelectionChangeIfNecessary;
- (void)_copySelectionToClipboard:(id)a0;
- (BOOL)supportLetterByLetterUndo;
- (id)_rangeOfText:(id)a0 endingAtPosition:(id)a1;
- (id)_setSelectionRangeWithHistory:(id)a0;
- (BOOL)_range:(id)a0 containsRange:(id)a1;
- (void)_clearMarkedText;
- (id)_fixupTypingAttributeForAttributes:(id)a0;
- (long long)_opposingDirectionFromDirection:(long long)a0;
- (void)_moveCurrentSelection:(int)a0;
- (void)setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_fullRange;
- (void)stopCoalescing;
- (id)_rangeOfParagraphEnclosingPosition:(id)a0;
- (void)unmarkText;
- (void)_setGestureRecognizers;
- (id)annotatedSubstringForRange:(id)a0;
- (long long)comparePosition:(id)a0 toPosition:(id)a1;
- (void)_detachFromLayoutManager;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (BOOL)_isSecureTextEntry;
- (void)_translate:(id)a0;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_caretRectForOffset:(unsigned long long)a0;
- (void)_pasteAttributedString:(id)a0 pasteAsRichText:(BOOL)a1;
- (void)_forceUnmarkTextDueToEditing;
- (void)replaceRange:(id)a0 withText:(id)a1;
- (void)_setInternalGestureRecognizers;
- (void)pasteItemProviders:(id)a0 matchesStyle:(BOOL)a1;
- (void)_expandSelectionToBackwardDeletionClusterWithReinsertionOut:(id *)a0;
- (void)_coordinateSelectionChange:(id /* block */)a0;
- (id)_textInputTraits;
- (void)paste:(id)a0;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)didEndEditing;
- (void)addTextAlternativesDisplayStyle:(long long)a0 toRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned int)_characterBeforeCaretSelection;
- (id)rangeWithTextAlternatives:(id *)a0 atPosition:(id)a1;
- (BOOL)_usesAsynchronousProtocol;
- (void)removeSpellingMarkersForCurrentWord;
- (id)_intersectionOfRange:(id)a0 andRange:(id)a1;
- (void)removeTextPlaceholder:(id)a0 notifyInputDelegate:(BOOL)a1;
- (BOOL)_selectionAtDocumentEnd;
- (id)_setHistory:(id)a0 withExtending:(BOOL)a1 withAnchor:(int)a2 withAffinityDownstream:(BOOL)a3;
- (BOOL)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)a0 forText:(id)a1 checkAutocorrection:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeForBackwardsDelete;
- (id)_attributesForReplacementInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_ensureSelectionValid;
- (void)replaceRange:(id)a0 withAnnotatedString:(id)a1 relativeReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)insertText:(id)a0;
- (BOOL)_mightHaveSelection;
- (void)signalDictationInputEvent:(id)a0 insertedText:(id)a1;
- (void)_pasteAttributedString:(id)a0 toRange:(id)a1 completion:(id /* block */)a2;
- (void)setBaseWritingDirection:(long long)a0 forRange:(id)a1;
- (void)_selectAll;
- (id)textRangeFromPosition:(id)a0 toPosition:(id)a1;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (void)_registerUndoOperationForReplacementWithActionName:(id)a0 replacementText:(id)a1;
- (void)_setSelectionToPosition:(id)a0;
- (id)_textColorForCaretSelection;
- (void)insertDictationResult:(id)a0 withCorrectionIdentifier:(id)a1;
- (BOOL)_range:(id)a0 isEqualToRange:(id)a1;
- (BOOL)_isDisplayingShareViewController;
- (void)validateCommand:(id)a0;
- (void)notifyTextCheckingControllerForSelectionChange;
- (void)_define:(id)a0;
- (long long)_resolveNaturalDirection:(long long)a0;
- (id)_firstTextView;
- (id)_characterPositionForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_sendDelegateChangeNotificationsForText:(BOOL)a0 selection:(BOOL)a1;
- (BOOL)_hasMarkedText;
- (id)insertTextPlaceholderWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_deleteForwardAndNotify:(BOOL)a0;
- (void)_textContainerDidChangeView:(id)a0;
- (unsigned int)_characterInRelationToPosition:(id)a0 amount:(int)a1;
- (id)textRangeForNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_attributesForInsertionOfText:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)pasteItemProviders:(id)a0;
- (void)_copySelectionToClipboard;
- (void)updateTextAttributesWithConversionHandler:(id /* block */)a0;
- (id)_normalizedStringForRangeComparison:(id)a0;
- (id)_senderForDelegateNotifications;
- (void)alignJustified:(id)a0;
- (void)_textStorageDidProcessEditing:(id)a0;
- (void)_invalidateEmptyStringAttributes;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)dealloc;
- (void)_resetShowingTextStyle:(id)a0;
- (void)_unmarkText;
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_insertAttributedText:(id)a0 fromKeyboard:(BOOL)a1;
- (void)alignCenter:(id)a0;
- (void)checkSmartPunctuationForWordInRange:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (void)changeWillBeUndone:(id)a0;
- (void)clearText;
- (id)_selectableText;
- (void)_updateFirstTextView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTextPlaceholder:(id)a0;
- (unsigned long long)_validCaretPositionFromCharacterIndex:(unsigned long long)a0 downstream:(BOOL)a1;
- (void)_pasteRawAttributedString:(id)a0 asRichText:(BOOL)a1;
- (BOOL)_isEmptySelection;
- (BOOL)_range:(id)a0 intersectsRange:(id)a1;
- (id)_clampedpositionFromPosition:(id)a0 offset:(int)a1;
- (void)_sendDelegateWillChangeNotificationsForText:(BOOL)a0 selection:(BOOL)a1;
- (void)removeTextPlaceholder:(id)a0;
- (id)attributedSubstringForMarkedRange;
- (id)initWithTextLayoutController:(id)a0;
- (void)signalDictationDeletionTip;
- (id)_positionFromPosition:(id)a0 pastTextUnit:(long long)a1 inDirection:(long long)a2;
- (BOOL)_isDisplayingShortcutViewController;
- (void)_setUndoRedoInProgress:(BOOL)a0;
- (void)_setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fromKeyboard:(BOOL)a2 useTextStyle:(BOOL)a3;
- (BOOL)dontRemoveAllActions;
- (BOOL)shouldStartNewUndoGroup:(id)a0 textGranularity:(long long)a1 operationType:(int)a2;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)copy:(id)a0;
- (id)_positionAtStartOfWords:(unsigned long long)a0 beforePosition:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForDictationResultPlaceholder:(id)a0;
- (id)_keyInput;
- (id)_parentScrollView;
- (void)_deleteTextRange:(id)a0;
- (BOOL)_shouldConsiderTextViewForGeometry:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectedRange;
- (void)_share:(id)a0;
- (id)_prefixTokensForDictationAttributedText:(id)a0 lastDictationAttributedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 currentDictationAttributedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)_setSelectedRangeToEndIfNecessary;
- (id)_rangeOfEnclosingWord:(id)a0;
- (void)removeAlternativesForCurrentWord;
- (id)_rangeOfTextUnit:(long long)a0 enclosingPosition:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeAfterCancelDictationIfNecessaryForChangeInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)undoManager;
- (void)_layoutManagerDidCompleteLayout;
- (void)_updateRangeForSmartDelete;
- (int)_indexForTextPosition:(id)a0;
- (void)_toggleFontTrait:(unsigned int)a0;
- (void)_updateSelectionWithTextRange:(id)a0 withAffinityDownstream:(BOOL)a1;
- (id)_pasteController;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (id)_newAttributedStringForInsertionOfText:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_selectionDidScroll:(id)a0;
- (void)appendUndoOperation:(id)a0 newGroup:(BOOL)a1;
- (void)_replaceDocumentWithText:(id)a0;
- (void)deleteBackward;
- (id)_fullText;
- (id)_userEditedTextInfo;
- (id)_findBoundaryPositionClosestToPosition:(id)a0 withGranularity:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectedRangeWithinMarkedText;
- (id)_rangeOfLineEnclosingPosition:(id)a0;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)a0 replacementText:(id)a1;
- (void)_replaceCurrentWordWithText:(id)a0;
- (BOOL)_pasteFromPasteboard:(id)a0 andMatchStyle:(BOOL)a1;
- (id)_rangeOfSentenceEnclosingPosition:(id)a0;
- (void)_selectionGeometryChanged;
- (void)registerUndoOperationForType:(int)a0 actionName:(id)a1 affectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 replacementText:(id)a3;
- (id)_selectedAttributedText;
- (unsigned int)_characterInRelationToRangedSelection:(int)a0;
- (BOOL)_undoRedoInProgress;
- (id)_itemProviderForCopyingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeToReplaceWhenInsertingText;
- (void)scheduleUndoOperationForType:(int)a0 actionName:(id)a1 previousSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 replacementText:(id)a3;
- (void)replaceRange:(id)a0 withAttributedText:(id)a1;
- (long long)writingDirectionAtPosition:(id)a0;
- (void)_updateEmptyStringAttributes;
- (id)_attributedStringForInsertionOfAttributedString:(id)a0;
- (BOOL)_selectionAtWordStart;
- (id)textInRange:(id)a0;
- (void)_insertAttributedTextWithoutClosingTyping:(id)a0;
- (void).cxx_destruct;
- (void)undoDidChangeText;
- (id)insertTextPlaceholderWithSize:(struct CGSize { double x0; double x1; })a0 embeddingType:(long long)a1;
- (id)_fallbackFont;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nsrangeForTextRange:(id)a0;
- (void)_validateCommand:(id)a0 forFont:(id)a1 traits:(int)a2;
- (void)removeAnnotation:(id)a0 forRange:(id)a1;
- (void)_performWhileSuppressingDelegateNotifications:(id /* block */)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_selectedNSRange;
- (void)updateSelection;
- (void)_undoManagerWillUndo:(id)a0;
- (void)_changeTextAlignment:(long long)a0 undoString:(id)a1;
- (void)_updateRectsForPlaceholder;
- (void)_extendCurrentSelection:(int)a0;
- (void)forwardInvocation:(id)a0;
- (id)_fontForCaretSelection;
- (id)attributedTextInRange:(id)a0;
- (BOOL)_hasDictationPlaceholder;
- (void)removeTextStylingFromString:(id)a0;
- (void)_ensureSelectionVisible;
- (void)signalDictationSelectionTip:(id)a0;
- (void)_setAttributedMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)_isDisplayingTextService;

@end
