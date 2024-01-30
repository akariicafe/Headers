@class UIResponder, UITextRange, DOMRange;
@protocol UITextInputPrivate;

@interface UITextSelection : NSObject

@property (readonly, weak, nonatomic) UIResponder<UITextInputPrivate> *document;
@property (retain, nonatomic) UITextRange *selectedRange;
@property (nonatomic) long long granularity;
@property (readonly, nonatomic) BOOL isCommitting;
@property (readonly, nonatomic) BOOL willSelectionChange;
@property (retain, nonatomic) UITextRange *base;
@property (retain, nonatomic) UITextRange *initialExtent;
@property (readonly, nonatomic, getter=_domRange) DOMRange *domRange;

- (void)selectAll;
- (void)commit;
- (void)collapseSelection;
- (id)wordContainingCaretSelection;
- (void)clearSelection;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })clipPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void).cxx_destruct;
- (void)clearRangedSelectionInitialExtent;
- (void)alterSelectionGranularity:(long long)a0;
- (void)dealloc;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (id)selectionRects;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (id)initWithDocument:(id)a0;
- (BOOL)hasEditableSelection;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closestCaretRectForPoint:(struct CGPoint { double x0; double x1; })a0 inSelection:(BOOL)a1;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)extendSelectionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)increaseSelectionGranularity;
- (void)selectionChanged;
- (void)setSelectionWithFirstPoint:(struct CGPoint { double x0; double x1; })a0 secondPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)pointAtEndOfLine:(struct CGPoint { double x0; double x1; })a0;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isRangedSelectionSpanningDocument;
- (id)selectedText;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)pointAtStartOfLine:(struct CGPoint { double x0; double x1; })a0;
- (void)smartExtendRangedSelection:(int)a0 downstream:(BOOL)a1;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1 allowFlipping:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRect;
- (void)alterSelection:(struct CGPoint { double x0; double x1; })a0 granularity:(long long)a1;
- (void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
- (void)setGranularRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtEndOfDocument;
- (unsigned long long)offsetInMarkedText;
- (void)invalidate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtBeginOfDocument;

@end
