@class NSTextSelectionNavigation, NSMapTable, NSSet, NSTextRange, NSArray;

@interface __NSTextSelectionLineFragmentInfo : NSObject {
    long long _offset;
    long long _baseDirection;
    int _visualDirection;
    struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *_carets;
    long long _numberOfCarets;
    NSMapTable *_primaryLocationTable;
    NSSet *_secondaryLocationTable;
    NSArray *_sortedLocations;
    NSArray *_otherLocations;
}

@property (readonly) NSTextSelectionNavigation *textSelectionNavigation;
@property (readonly) NSTextRange *textRange;
@property (readonly, getter=isMonotonicDirection) BOOL monotonicDirection;
@property long long numberOfCaretPositions;

- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)caretPositionClosestToLocation:(id)a0 visualDirection:(long long)a1 matchLocation:(out BOOL *)a2;
- (id)_sortedLocations;
- (long long)_baseWritingDirection;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)caretPositionClosestToOffset:(double)a0;
- (double)offsetForLocation:(id)a0;
- (id)description;
- (long long)_sortedLocationIndexForLocation:(id)a0;
- (id)initWithTextSelectionNavigation:(id)a0 range:(id)a1;
- (id)rangesBetweenStartingOffset:(double)a0 endOffset:(double)a1 continuous:(BOOL)a2;
- (long long)indexForPrimaryLocation:(id)a0;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)logicalLastCaret;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)caretPositionAtIndex:(long long)a0;
- (long long)indexForEdgeLocationInTextRanges:(id)a0 leading:(BOOL)a1;
- (void)_cache;
- (long long)numberOfCaretPositions;
- (void)dealloc;
- (const struct { double x0; id x1; id x2; BOOL x3; BOOL x4; } *)logicalFirstCaret;
- (id)_findNextCaretLocationForLocation:(id)a0;
- (id)textRangeOfCharacterAtOffset:(double)a0 fractionOfDistanceThroughGlyph:(double *)a1;

@end
