@interface PKTextInputUITextInputInterface : NSObject

+ (id)editableTextAttachmentFileTypes;
+ (void)notifyTextDidChangeInTextInput:(id)a0;
+ (BOOL)_callShouldChangeTextInRange:(id)a0 replacementText:(id)a1 inTextInput:(id)a2;
+ (BOOL)_callShouldInsertText:(id)a0 inTextInput:(id)a1 isMarkedText:(BOOL)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeFromUITextPosition:(id)a0 toUITextPosition:(id)a1 inTextInput:(id)a2;
+ (BOOL)_selectTextRange:(id)a0 inTextInput:(id)a1;
+ (id)_uiTextRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextInput:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })activePreviewRangeInTextInput:(id)a0;
+ (id)attributesAtCharacterIndex:(long long)a0 inTextInput:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForCharacterIndex:(long long)a0 inCoordinateSpace:(id)a1 inTextInput:(id)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectInCoordinateSpace:(id)a0 inTextInput:(id)a1;
+ (long long)characterIndexClosestToPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1 inTextInput:(id)a2 forInsertingText:(BOOL)a3;
+ (long long)characterIndexClosestToPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1 inTextInput:(id)a2 forInsertingText:(BOOL)a3 adjustForLastCharacter:(BOOL)a4;
+ (BOOL)clearActivePreviewInTextInput:(id)a0;
+ (BOOL)configureSelectionStyleForDeletionPreviewInTextInput:(id)a0;
+ (BOOL)configureSelectionStyleForHighlightInTextInput:(id)a0;
+ (BOOL)configureSelectionStyleForNormalSelectionInTextInput:(id)a0;
+ (long long)contentLengthForTextInput:(id)a0;
+ (BOOL)deleteTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextInput:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstRectForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inCoordinateSpace:(id)a1 inTextInput:(id)a2;
+ (BOOL)insertCommittedText:(id)a0 withAlternatives:(id)a1 activePreviewText:(id)a2 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 inTextInput:(id)a4;
+ (id)insertTextPlaceholderWithSize:(struct CGSize { double x0; double x1; })a0 inTextInput:(id)a1;
+ (BOOL)isProtectedTextAttachment:(id)a0;
+ (BOOL)isValidRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextInput:(id)a1;
+ (BOOL)makeTextInputFirstResponder:(id)a0 forPencilInput:(BOOL)a1;
+ (void)notifyTextWillChangeInTextInput:(id)a0;
+ (id)protectedCharacterIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextInput:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfCharacterAtIndex:(unsigned long long)a0 inTextInput:(id)a1;
+ (id)rectValuesForSelectionRects:(id)a0 inCoordinateSpace:(id)a1 inTextInput:(id)a2 intersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (void)removeTextPlaceholder:(id)a0 inTextInput:(id)a1;
+ (BOOL)selectTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextInput:(id)a1;
+ (BOOL)selectWordBoundaryAtPoint:(struct CGPoint { double x0; double x1; })a0 inTextInput:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRangeInTextInput:(id)a0;
+ (id)selectionRectsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inCoordinateSpace:(id)a1 inTextInput:(id)a2 intersectingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (BOOL)setSelectionWithReferencePoint:(struct CGPoint { double x0; double x1; })a0 inTextInput:(id)a1;
+ (BOOL)showSelectionCommandsForTextInput:(id)a0;
+ (id)stringInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextInput:(id)a1;

@end
