@class UIWKDocumentContext, UITextInputTraits, NSString, UIView, PKTextInputElement;
@protocol UITextInput, UIWKInteractionViewProtocol;

@interface PKTextInputElementContent : NSObject

@property (nonatomic, setter=_setDataLoadedState:) long long dataLoadedState;
@property (weak, nonatomic) id<UITextInput> _textInput;
@property (retain, nonatomic) UITextInputTraits *textInputTraits;
@property (weak, nonatomic) UIView<UIWKInteractionViewProtocol> *_webDocumentSourceView;
@property (weak, nonatomic) id<UITextInput> _webTextInput;
@property (retain, nonatomic) UIWKDocumentContext *_webDocumentContext;
@property (retain, nonatomic) NSString *_webComposedContextString;
@property (readonly, nonatomic) PKTextInputElement *element;
@property (readonly, nonatomic) BOOL isReadyForTextEdits;
@property (readonly, nonatomic) NSString *textContentType;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) BOOL isSingleLineDocument;
@property (readonly, nonatomic) BOOL supportsAutoLineBreaks;
@property (readonly, nonatomic) long long contentLength;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;

- (void).cxx_destruct;
- (id)description;
- (void)insertTextPlaceholderWithSize:(struct CGSize { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (void)removeTextPlaceholder:(id)a0 willInsertText:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithElement:(id)a0;
- (void)loadDataIfNeededWithTextInput:(id)a0;
- (void)loadDataIfNeededWithWebDocumentSourceView:(id)a0 textInput:(id)a1 rectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completion:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectInCoordinateSpace:(id)a0;
- (void)setSelectionWithReferencePoint:(struct CGPoint { double x0; double x1; })a0 completionHandler:(id /* block */)a1;
- (long long)characterIndexClosestToPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1 forInsertingText:(BOOL)a2;
- (void)enumerateBoundsForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inCoordinateSpace:(id)a1 reverse:(BOOL)a2 block:(id /* block */)a3;
- (id)stringInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)protectedCharacterIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCharacterAtIndex:(unsigned long long)a0;
- (BOOL)_needsToLoadData;
- (void)loadTextInputTraitsIfNeededWithTextInput:(id)a0;
- (void)_textInput_enumerateBoundsForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inCoordinateSpace:(id)a1 reverse:(BOOL)a2 block:(id /* block */)a3;
- (void)_webDocumentContext_enumerateBoundsForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inCoordinateSpace:(id)a1 reverse:(BOOL)a2 block:(id /* block */)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inCoordinateSpace:(id)a1;
- (id)selectionRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inCoordinateSpace:(id)a1 visibleOnly:(BOOL)a2;
- (void)markAnalyticsForInsertionWithTexts:(id)a0 rangeToReplace:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)deleteTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 completion:(id /* block */)a1;
- (BOOL)_webInsertTextsToCommitPhase2:(id)a0 withAlternatives:(id)a1 activePreviewText:(id)a2 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 committedLength:(long long *)a4;
- (void)_webInsertCommittedTextPhase3:(id)a0 withAlternatives:(id)a1 activePreviewText:(id)a2 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 webTextInput:(id)a4;
- (void)markAnalyticsForDeletionCount:(unsigned long long)a0 rangeToReplace:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)markAnalyticsForSelectionChange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)requestUpdatedApproximateCaretRectInCoordinateSpace:(id)a0 completion:(id /* block */)a1;
- (void)requestUpdatedLastSelectionRectForCommittedTextLength:(long long)a0 targetCoordinateSpace:(id)a1 completion:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForCharacterIndex:(long long)a0 inCoordinateSpace:(id)a1;
- (id)rectValuesForSelectionRects:(id)a0 inCoordinateSpace:(id)a1 visibleOnly:(BOOL)a2;
- (void)insertTextsToCommit:(id)a0 withAlternatives:(id)a1 activePreviewText:(id)a2 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 completion:(id /* block */)a4;
- (void)selectTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 completion:(id /* block */)a1;
- (BOOL)configureSelectionStyleForHighlight;
- (BOOL)configureSelectionStyleForDeletionPreview;
- (BOOL)configureSelectionStyleForNormalSelection;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTextPlaceholder:(id)a0 inCoordinateSpace:(id)a1;

@end
