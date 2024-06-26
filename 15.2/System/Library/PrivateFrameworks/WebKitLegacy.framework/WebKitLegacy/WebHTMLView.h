@class NSString, WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching> {
    WebHTMLViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedImageMIMETypes;
+ (id)supportedNonImageMIMETypes;
+ (id)supportedMediaMIMETypes;
+ (id)supportedMIMETypes;
+ (id)unsupportedTextMIMETypes;

- (id)_frame;
- (void)mouseUp:(id)a0;
- (BOOL)_isEditable;
- (void)selectAll;
- (void)layoutIfNeeded;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)selectionView;
- (void)makeTextWritingDirectionLeftToRight:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (BOOL)hasMarkedText;
- (void)makeTextWritingDirectionRightToLeft:(id)a0;
- (id)_selectedRange;
- (void)_selectionChanged;
- (long long)conversationIdentifier;
- (void)paste:(id)a0;
- (void)alignLeft:(id)a0;
- (id)string;
- (void)cut:(id)a0;
- (void)copy:(id)a0;
- (void)close;
- (void)moveUp:(id)a0;
- (BOOL)_isInPrintMode;
- (id)selectedString;
- (id)selectionTextRects;
- (void)yank:(id)a0;
- (struct CGImage { } *)selectionImageForcingBlackText:(BOOL)a0;
- (BOOL)supportsTextEncoding;
- (BOOL)_beginPrintModeWithMinimumPageWidth:(double)a0 height:(double)a1 maximumPageWidth:(double)a2;
- (double)_adjustedBottomOfPageWithTop:(double)a0 bottom:(double)a1 limit:(double)a2;
- (void)keyDown:(id)a0;
- (void)_endPrintMode;
- (void)touch:(id)a0;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setMark:(id)a0;
- (void)insertText:(id)a0;
- (void)addSubview:(id)a0;
- (void)moveLeft:(id)a0;
- (BOOL)_canEdit;
- (void)setDataSource:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)unmarkText;
- (id)_webView;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)moveDown:(id)a0;
- (void)alignRight:(id)a0;
- (void)willRemoveSubview:(id)a0;
- (void)scrollWheel:(id)a0;
- (id)_dataSource;
- (void)moveBackward:(id)a0;
- (void)moveForward:(id)a0;
- (id)elementAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)toggleBold:(id)a0;
- (id)_documentRange;
- (void)keyUp:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)toggleItalic:(id)a0;
- (void)pasteAsPlainText:(id)a0;
- (void)insertTab:(id)a0;
- (void)transpose:(id)a0;
- (void)moveRight:(id)a0;
- (void)insertNewline:(id)a0;
- (void)deleteForward:(id)a0;
- (void)insertBacktab:(id)a0;
- (void)indent:(id)a0;
- (void)pageUp:(id)a0;
- (void)alignJustified:(id)a0;
- (void)moveWordRight:(id)a0;
- (void)deselectAll;
- (BOOL)resignFirstResponder;
- (void)mouseDown:(id)a0;
- (id)_accessibilityParentForSubview:(id)a0;
- (void)insertNewlineIgnoringFieldEditor:(id)a0;
- (void)insertLineBreak:(id)a0;
- (void)moveWordLeft:(id)a0;
- (void)deleteBackward:(id)a0;
- (void)deleteToBeginningOfLine:(id)a0;
- (void)deleteToEndOfParagraph:(id)a0;
- (void)insertTabIgnoringFieldEditor:(id)a0;
- (void)deleteWordBackward:(id)a0;
- (void)delete:(id)a0;
- (void)_layoutIfNeeded;
- (void)moveBackwardAndModifySelection:(id)a0;
- (void)moveLeftAndModifySelection:(id)a0;
- (BOOL)_needsLayout;
- (void)moveForwardAndModifySelection:(id)a0;
- (void)moveRightAndModifySelection:(id)a0;
- (void)moveWordLeftAndModifySelection:(id)a0;
- (void)moveWordRightAndModifySelection:(id)a0;
- (void)moveDownAndModifySelection:(id)a0;
- (void)moveUpAndModifySelection:(id)a0;
- (void)moveWordBackward:(id)a0;
- (void)moveWordBackwardAndModifySelection:(id)a0;
- (void)moveWordForward:(id)a0;
- (void)moveWordForwardAndModifySelection:(id)a0;
- (void)moveToLeftEndOfLine:(id)a0;
- (void)moveToLeftEndOfLineAndModifySelection:(id)a0;
- (void)moveToRightEndOfLine:(id)a0;
- (void)moveToRightEndOfLineAndModifySelection:(id)a0;
- (BOOL)isOpaque;
- (void)moveToBeginningOfParagraph:(id)a0;
- (void)moveToEndOfParagraph:(id)a0;
- (void)moveToBeginningOfParagraphAndModifySelection:(id)a0;
- (void)moveToEndOfParagraphAndModifySelection:(id)a0;
- (void)moveToEndOfDocument:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)moveToBeginningOfDocument:(id)a0;
- (void)moveToBeginningOfDocumentAndModifySelection:(id)a0;
- (void)moveToEndOfDocumentAndModifySelection:(id)a0;
- (void)setNeedsLayout:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionRect;
- (void)alignCenter:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)selectAll:(id)a0;
- (void)layout;
- (void)makeTextWritingDirectionNatural:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)setScale:(float)a0;
- (void)toggleUnderline:(id)a0;
- (void)_stopAutoscrollTimer;
- (unsigned long long)characterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)outdent:(id)a0;
- (void)viewWillDraw;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseMoved:(id)a0;
- (void)insertParagraphSeparator:(id)a0;
- (id)accessibilityFocusedUIElement;
- (void)_frameOrBoundsChanged;
- (BOOL)_hasSelection;
- (id)_frameView;
- (void)_destroyAllWebPlugins;
- (id)_pluginController;
- (void)dataSourceUpdated:(id)a0;
- (void)closeIfNotCurrentView;
- (void)viewWillMoveToHostWindow:(id)a0;
- (void)viewDidMoveToHostWindow;
- (BOOL)_shouldInsertText:(id)a0 replacingDOMRange:(id)a1 givenAction:(long long)a2;
- (id)_topHTMLView;
- (BOOL)_shouldInsertFragment:(id)a0 replacingDOMRange:(id)a1 givenAction:(long long)a2;
- (BOOL)_shouldReplaceSelectionWithText:(id)a0 givenAction:(long long)a1;
- (void)_setMouseDownEvent:(id)a0;
- (BOOL)_isTopHTMLView;
- (void)_web_updateLayoutAndStyleIfNeededRecursive;
- (BOOL)_hasSelectionOrInsertionPoint;
- (BOOL)_isInScreenPaginationMode;
- (void)_setPrinting:(BOOL)a0 minimumPageLogicalWidth:(float)a1 logicalHeight:(float)a2 originalPageWidth:(float)a3 originalPageHeight:(float)a4 maximumShrinkRatio:(float)a5 adjustViewSize:(BOOL)a6 paginateScreenContent:(BOOL)a7;
- (void)_setAsideSubviews;
- (void)_restoreSubviews;
- (void)_setToolTip:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionRect;
- (BOOL)_canEditRichly;
- (BOOL)_canAlterCurrentSelection;
- (BOOL)_hasInsertionPoint;
- (id)_insertOrderedList;
- (id)_insertUnorderedList;
- (BOOL)_canIncreaseSelectionListLevel;
- (BOOL)_canDecreaseSelectionListLevel;
- (id)_increaseSelectionListLevel;
- (id)_increaseSelectionListLevelOrdered;
- (id)_increaseSelectionListLevelUnordered;
- (void)_decreaseSelectionListLevel;
- (BOOL)_isUsingAcceleratedCompositing;
- (id)_compositingLayersHostingView;
- (BOOL)_beginPrintModeWithPageWidth:(float)a0 height:(float)a1 shrinkToFit:(BOOL)a2;
- (BOOL)_beginScreenPaginationModeWithPageSize:(struct CGSize { double x0; double x1; })a0 shrinkToFit:(BOOL)a1;
- (void)_endScreenPaginationMode;
- (id)accessibilityRootElement;
- (void)markedTextUpdate:(id)a0;
- (BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)a0;
- (struct Command { struct EditorInternalCommand *x0; int x1; struct RefPtr<WebCore::Document, WTF::RawPtrTraits<WebCore::Document>, WTF::DefaultRefDerefTraits<WebCore::Document>> { struct Document *x0; } x2; struct RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> { struct Frame *x0; } x3; })coreCommandBySelector:(SEL)a0;
- (struct Command { struct EditorInternalCommand *x0; int x1; struct RefPtr<WebCore::Document, WTF::RawPtrTraits<WebCore::Document>, WTF::DefaultRefDerefTraits<WebCore::Document>> { struct Document *x0; } x2; struct RefPtr<WebCore::Frame, WTF::RawPtrTraits<WebCore::Frame>, WTF::DefaultRefDerefTraits<WebCore::Frame>> { struct Frame *x0; } x3; })coreCommandByName:(const char *)a0;
- (void)executeCoreCommandBySelector:(SEL)a0;
- (BOOL)maintainsInactiveSelection;
- (void)layoutToMinimumPageWidth:(float)a0 height:(float)a1 originalPageWidth:(float)a2 originalPageHeight:(float)a3 maximumShrinkRatio:(float)a4 adjustingViewSize:(BOOL)a5;
- (BOOL)searchFor:(id)a0 direction:(BOOL)a1 caseSensitive:(BOOL)a2 wrap:(BOOL)a3 startInSelection:(BOOL)a4;
- (void)drawSingleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)elementAtPoint:(struct CGPoint { double x0; double x1; })a0 allowShadowContent:(BOOL)a1;
- (void)clearFocus;
- (void)_applyEditingStyleToSelection:(void *)a0 withUndoAction:(unsigned char)a1;
- (void)selectWord:(id)a0;
- (void)_changeWordCaseWithSelector:(SEL)a0;
- (BOOL)searchFor:(id)a0 direction:(BOOL)a1 caseSensitive:(BOOL)a2 wrap:(BOOL)a3;
- (void)executeCoreCommandByName:(const char *)a0;
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)a0;
- (void)deleteToBeginningOfParagraph:(id)a0;
- (void)deleteToEndOfLine:(id)a0;
- (void)deleteToMark:(id)a0;
- (void)deleteWordForward:(id)a0;
- (void)ignoreSpelling:(id)a0;
- (void)moveParagraphBackwardAndModifySelection:(id)a0;
- (void)moveParagraphForwardAndModifySelection:(id)a0;
- (void)moveToBeginningOfLine:(id)a0;
- (void)moveToBeginningOfLineAndModifySelection:(id)a0;
- (void)moveToBeginningOfSentence:(id)a0;
- (void)moveToBeginningOfSentenceAndModifySelection:(id)a0;
- (void)moveToEndOfLine:(id)a0;
- (void)moveToEndOfLineAndModifySelection:(id)a0;
- (void)moveToEndOfSentence:(id)a0;
- (void)moveToEndOfSentenceAndModifySelection:(id)a0;
- (void)overWrite:(id)a0;
- (void)pageDown:(id)a0;
- (void)pageDownAndModifySelection:(id)a0;
- (void)pageUpAndModifySelection:(id)a0;
- (void)selectLine:(id)a0;
- (void)selectParagraph:(id)a0;
- (void)selectSentence:(id)a0;
- (void)selectToMark:(id)a0;
- (void)subscript:(id)a0;
- (void)superscript:(id)a0;
- (void)swapWithMark:(id)a0;
- (void)underline:(id)a0;
- (void)unscript:(id)a0;
- (void)yankAndSelect:(id)a0;
- (void)clearText:(id)a0;
- (void)jumpToSelection:(id)a0;
- (void)reapplyStyles;
- (void)setNeedsToApplyStyles:(BOOL)a0;
- (BOOL)_isSelectionEvent:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (void)centerSelectionInVisibleArea:(id)a0;
- (id)_emptyStyle;
- (void)_applyStyleToSelection:(id)a0 withUndoAction:(unsigned char)a1;
- (void)uppercaseWord:(id)a0;
- (void)lowercaseWord:(id)a0;
- (void)capitalizeWord:(id)a0;
- (void)makeBaseWritingDirectionNatural:(id)a0;
- (BOOL)_wantsKeyDownForEvent:(id)a0;
- (void)doCommandBySelector:(SEL)a0;
- (BOOL)_canSmartCopyOrDelete;
- (void)_executeSavedKeypressCommands;
- (BOOL)_handleEditingKeyEvent:(void *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_findString:(id)a0 options:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionImageRect;
- (unsigned long long)countMatchesForText:(id)a0 inDOMRange:(id)a1 options:(unsigned long long)a2 limit:(unsigned long long)a3 markMatches:(BOOL)a4;
- (void)setMarkedTextMatchesAreHighlighted:(BOOL)a0;
- (BOOL)markedTextMatchesAreHighlighted;
- (void)unmarkAllTextMatches;
- (id)rectsForTextMatches;

@end
