@class TTTextEditGrouper, ICNote, NSMutableSet, NSDate, ICDisplayLink, NSCache;

@interface ICAuthorHighlightsController : NSObject

@property (readonly, nonatomic) TTTextEditGrouper *editGrouper;
@property (readonly, nonatomic) NSMutableSet *textStorageDocumentsBeingUpdated;
@property (readonly, nonatomic) NSCache *editGroupsForTextStorageDocument;
@property (copy, nonatomic) NSDate *now;
@property (readonly, nonatomic) NSMutableSet *textStorageDocumentsNeedingHighlightUpdates;
@property (readonly, nonatomic) ICDisplayLink *highlightAnimationsDisplayLink;
@property (readonly, nonatomic) ICNote *note;
@property (readonly, nonatomic) double implicitHighlightValue;
@property (readonly, nonatomic) double fadedMultiplier;
@property (readonly, nonatomic) double highlightedMultiplier;
@property (nonatomic) BOOL allowsAnimations;

- (void)dealloc;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (id)editGroupsForTextStorage:(id)a0;
- (void)extendHighlightsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;
- (void)extendHighlightsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1 reverse:(BOOL)a2;
- (void)flashHighlightsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withDuration:(id)a1 inTextStorage:(id)a2;
- (id)highlightColorForUserID:(id)a0;
- (id)initWithNote:(id)a0;
- (BOOL)isPerformingHighlightUpdatesForTextStorage:(id)a0;
- (void)performHighlightUpdatesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1 updates:(id /* block */)a2;
- (BOOL)rangeHasOrNeedsHighlights:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;
- (void)removeHighlightAnimationsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;
- (void)removeHighlightValuesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;
- (void)setAttachmentHighlightValue:(double)a0 highlightColor:(id)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inTextStorage:(id)a3;
- (void)setCheckmarkHighlightValue:(double)a0 highlightColor:(id)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inTextStorage:(id)a3;
- (void)setHighlightAnimation:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inTextStorage:(id)a2;
- (void)setHighlightAttributesForHighlightValue:(double)a0 highlightColor:(id)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 inTextStorage:(id)a3 editGroups:(id)a4;
- (void)setHighlightValue:(id)a0 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inTextStorage:(id)a2;
- (void)setTextHighlightValue:(double)a0 highlightColor:(id)a1 blendsTextColor:(BOOL)a2 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 inTextStorage:(id)a4;
- (BOOL)shouldAnimateInTextStorage:(id)a0;
- (void)textStorageDidProcessEndEditing:(id)a0;
- (void)updateHighlightAnimationsIfNeeded;
- (void)updateHighlightAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inTextStorage:(id)a1;

@end
