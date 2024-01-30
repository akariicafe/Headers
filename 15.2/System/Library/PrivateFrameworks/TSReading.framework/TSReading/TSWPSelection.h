@class NSString;

@interface TSWPSelection : TSKSelection <NSCopying, TSDTextSelection> {
    struct TSWPRangeVector { struct _NSRange *__begin_; struct _NSRange *__end_; struct __compressed_pair<_NSRange *, std::allocator<_NSRange> > { struct _NSRange *__value_; } __end_cap_; } _visualRanges;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rawRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } smartFieldRange;
@property (nonatomic) unsigned long long headChar;
@property (nonatomic) unsigned long long tailChar;
@property (readonly, nonatomic) BOOL leadingEdge;
@property (readonly, nonatomic) unsigned long long leadingCharIndex;
@property (readonly, nonatomic) BOOL validVisualRanges;
@property (readonly, nonatomic) BOOL isVisual;
@property (readonly, nonatomic) int styleInsertionBehavior;
@property (readonly, nonatomic) int caretAffinity;
@property (readonly, nonatomic) BOOL isAtEndOfLine;
@property (readonly, nonatomic) BOOL isRange;
@property (readonly, nonatomic) BOOL isInsertionPoint;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (Class)archivedSelectionClass;
+ (id)selectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(int)a1 leadingEdge:(BOOL)a2 storage:(id)a3;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)compare:(id)a0;
- (unsigned long long)end;
- (unsigned long long)start;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)intersectsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)rightEdge;
- (unsigned long long)leftEdge;
- (id)initWithType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(int)a2 caretAffinity:(int)a3;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithNewType:(int)a0;
- (BOOL)isEquivalentForInsertionStyle:(id)a0;
- (id)initWithType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(int)a2 caretAffinity:(int)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 leadingEdge:(BOOL)a5 storage:(id)a6;
- (unsigned long long)visualRangeCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superRange;
- (id)copyWithNewType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithVisualRanges:(const void *)a0 startChar:(unsigned long long)a1 endChar:(unsigned long long)a2 rightToLeft:(BOOL)a3 sameLine:(BOOL)a4;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 head:(unsigned long long)a1 tail:(unsigned long long)a2;
- (id)visualRangesArray;
- (id)initWithType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(int)a2 caretAffinity:(int)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 leadingEdge:(BOOL)a5 leadingCharIndex:(unsigned long long)a6;
- (void)setHeadChar:(unsigned long long)a0 tailChar:(unsigned long long)a1;
- (void)i_setVisualRanges:(const void *)a0;
- (unsigned long long)insertionChar;
- (id)copyWithNewType:(int)a0 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithNewVisualRanges:(const void *)a0;
- (const void *)visualRanges;
- (void *)i_visualRanges;
- (BOOL)containsCharacterAtIndex:(unsigned long long)a0;
- (BOOL)containsCharacterAtIndex:(unsigned long long)a0 allowRightEdge:(BOOL)a1;

@end
