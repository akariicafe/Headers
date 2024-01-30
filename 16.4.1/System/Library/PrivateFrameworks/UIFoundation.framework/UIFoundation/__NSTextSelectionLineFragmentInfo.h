@class NSTextSelectionNavigation, NSMapTable, NSArray, NSTextRange;

@interface __NSTextSelectionLineFragmentInfo : NSObject {
    long long _offset;
    long long _baseDirection;
    int _visualDirection;
    struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *_carets;
    unsigned long long _numberOfCarets;
    NSMapTable *_primaryLocationTable;
    NSMapTable *_secondaryLocationTable;
    NSArray *_sortedLocations;
    NSArray *_otherLocations;
}

@property (readonly) NSTextSelectionNavigation *textSelectionNavigation;
@property (readonly) NSTextRange *textRange;
@property (readonly, getter=isMonotonicDirection) BOOL monotonicDirection;
@property long long numberOfCaretPositions;

- (id)_secondaryLocationTable;
- (long long)caretIndexForLocation:(id)a0 inTextRanges:(id)a1 secondaryCaretIndex:(long long *)a2;
- (id)textRangeOfCharacterAtOffset:(double)a0 fractionOfDistanceThroughGlyph:(double *)a1;
- (double)offsetForLocation:(id)a0;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)caretPositionAtIndex:(long long)a0;
- (void)_computeVisualDirection;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)caretPositionClosestToOffset:(double)a0;
- (long long)_sortedLocationIndexForLocation:(id)a0;
- (void)_invalidateSortedLocations;
- (void)_cache;
- (void)_fetchCaretOffsets;
- (long long)_baseWritingDirection;
- (id)_locationForEdgeCaretAtIndex:(unsigned long long)a0 leftEdge:(BOOL)a1;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)caretPositionClosestToLocation:(id)a0 visualDirection:(long long)a1 matchLocation:(out BOOL *)a2;
- (void)dealloc;
- (long long)caretIndexForEdgeLocationInTextRanges:(id)a0 leftEdge:(BOOL)a1;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)logicalLastCaret;
- (long long)caretIndexForPrimaryLocation:(id)a0;
- (long long)numberOfCaretPositions;
- (id)rangesBetweenStartingOffset:(double)a0 endOffset:(double)a1 continuous:(BOOL)a2;
- (id)initWithTextSelectionNavigation:(id)a0 range:(id)a1;
- (BOOL)location:(id)a0 isLeading:(out BOOL *)a1 trailing:(out BOOL *)a2 inTextRanges:(id)a3;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)logicalFirstCaret;
- (id)description;
- (void)_resolveTrailingEdges;
- (id)_findNextCaretLocationForLocation:(id)a0;
- (long long)caretIndexForSecondaryLocation:(id)a0;
- (id)_sortedLocations;

@end
