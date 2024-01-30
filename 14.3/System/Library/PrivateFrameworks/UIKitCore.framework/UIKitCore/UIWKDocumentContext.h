@class NSString, NSMutableData, NSObject, NSAttributedString;

@interface UIWKDocumentContext : NSObject {
    BOOL _rectsAreInCharacterOrder;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastRectRange;
}

@property (retain, nonatomic) NSMutableData *_selectionRects;
@property (readonly, nonatomic) NSString *_contextBeforeString;
@property (readonly, nonatomic) NSString *_selectedTextString;
@property (readonly, nonatomic) NSString *_contextAfterString;
@property (readonly, nonatomic) NSString *_markedTextString;
@property (copy, nonatomic) NSObject *contextBefore;
@property (copy, nonatomic) NSObject *selectedText;
@property (copy, nonatomic) NSObject *contextAfter;
@property (copy, nonatomic) NSObject *markedText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRangeInMarkedText;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedTextRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } markedTextRange;
@property (copy, nonatomic) NSAttributedString *annotatedText;

- (id)init;
- (void)enumerateLayoutRects:(id /* block */)a0;
- (void)resetTextRects;
- (void)addTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)sortTextRectsByCharacterRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeContainedWithinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enumerateLayoutRectsWithOptions:(unsigned long long)a0 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 block:(id /* block */)a2;
- (unsigned long long)closestCharacterIndexForPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)stringContainedWithinRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })deltaForSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)characterRectsForCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
