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

- (void)setSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)wordContainingCaretSelection;
- (BOOL)isRangedSelectionSpanningDocument;
- (void)extendSelectionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setSelectionWithFirstPoint:(struct CGPoint { double x0; double x1; })a0 secondPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)pointAtStartOfLine:(struct CGPoint { double x0; double x1; })a0;
- (void)selectAll;
- (id)selectedText;
- (void)clearSelection;
- (void)aggressivelyExpandSelectionToSmartSelectionContainingCaretSelection;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;
- (void)selectionChanged;
- (void)commit;
- (id)selectionRects;
- (unsigned long long)offsetInMarkedText;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1;
- (void)setHybridSelectionWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)moveCaretToBoundaryOfWhitespaceOrLine;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint { double x0; double x1; })a0 baseIsStart:(BOOL)a1 allowFlipping:(BOOL)a2;
- (void)alterSelectionGranularity:(long long)a0;
- (struct CGPoint { double x0; double x1; })clipPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setGranularRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)pointAtEndOfLine:(struct CGPoint { double x0; double x1; })a0;
- (void)smartExtendRangedSelection:(int)a0 downstream:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRect;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })closestCaretRectForPoint:(struct CGPoint { double x0; double x1; })a0 inSelection:(BOOL)a1;
- (void)alterSelection:(struct CGPoint { double x0; double x1; })a0 granularity:(long long)a1;
- (id)initWithDocument:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtBeginOfDocument;
- (BOOL)hasEditableSelection;
- (void)increaseSelectionGranularity;
- (id)_boundedOrInvertedSelectionRangeForExtent:(id)a0 forPoint:(struct CGPoint { double x0; double x1; })a1 fromPosition:(id)a2 inDirection:(long long)a3;
- (BOOL)_allowsSelectionInversion;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)invalidate;
- (void)collapseSelection;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectAtEndOfDocument;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;

@end
