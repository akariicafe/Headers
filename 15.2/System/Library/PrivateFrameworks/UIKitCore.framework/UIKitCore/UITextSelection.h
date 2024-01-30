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

- (id)selectedText;
- (void)selectAll;
- (id)wordContainingCaretSelection;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1;
- (void)clearSelection;
- (id)selectionRects;
- (void)extendSelectionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)selectionChanged;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1 allowFlipping:(BOOL)a2;
- (unsigned long long)offsetInMarkedText;
- (void)clearRangedSelectionInitialExtent;
- (void)increaseSelectionGranularity;
- (void)setSelectionWithFirstPoint:(struct CGPoint { double x0; double x1; })a0 secondPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)commit;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)alterSelection:(struct CGPoint { double x0; double x1; })a0 granularity:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closestCaretRectForPoint:(struct CGPoint { double x0; double x1; })a0 inSelection:(BOOL)a1;
- (void)setGranularRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)pointAtEndOfLine:(struct CGPoint { double x0; double x1; })a0;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (struct CGPoint { double x0; double x1; })clipPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRect;
- (void)alterSelectionGranularity:(long long)a0;
- (void)setSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void).cxx_destruct;
- (void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
- (void)invalidate;
- (BOOL)pointAtStartOfLine:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtEndOfDocument;
- (void)collapseSelection;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (BOOL)isRangedSelectionSpanningDocument;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtBeginOfDocument;
- (id)initWithDocument:(id)a0;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (BOOL)hasEditableSelection;
- (void)smartExtendRangedSelection:(int)a0 downstream:(BOOL)a1;

@end
