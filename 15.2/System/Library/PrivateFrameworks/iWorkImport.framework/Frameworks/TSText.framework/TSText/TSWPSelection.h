@class NSString, TSWPRangeArray;

@interface TSWPSelection : TSKSelection <TSDTextSelection> {
    TSWPRangeArray *_visualRanges;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rawRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } smartFieldRange;
@property (nonatomic) unsigned long long headCharIndex;
@property (nonatomic) unsigned long long tailCharIndex;
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
@property (readonly, nonatomic) BOOL allowsKeyCommandCaching;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)selectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (Class)archivedSelectionClass;
+ (id)selectionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 type:(int)a1 leadingEdge:(BOOL)a2 storage:(id)a3;
+ (id)selectionFromWPSelection:(id)a0;
+ (BOOL)p_checkEndOfLineFlagForRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 leadingEdge:(inout BOOL *)a1 type:(inout int *)a2 endOfLine:(BOOL)a3 storage:(id)a4;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)compare:(id)a0;
- (unsigned long long)end;
- (unsigned long long)start;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)intersectsRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(int)a2 caretAffinity:(int)a3;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithNewType:(int)a0;
- (BOOL)isEquivalentForInsertionStyle:(id)a0;
- (id)initWithType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(int)a2 caretAffinity:(int)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 leadingEdge:(BOOL)a5 storage:(id)a6;
- (unsigned long long)visualRangeCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })superRange;
- (id)copyWithNewType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 head:(unsigned long long)a1 tail:(unsigned long long)a2;
- (id)visualRangesArray;
- (id)initWithType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(int)a2 caretAffinity:(int)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 leadingEdge:(BOOL)a5 leadingCharIndex:(unsigned long long)a6;
- (void)i_setVisualRanges:(id)a0;
- (unsigned long long)insertionChar;
- (id)copyWithNewType:(int)a0 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)copyWithNewVisualRanges:(id)a0;
- (id)visualRanges;
- (id)i_visualRanges;
- (BOOL)containsCharacterAtIndex:(unsigned long long)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)setHeadCharIndex:(unsigned long long)a0 tailCharIndex:(unsigned long long)a1;
- (id)copyWithNewStyleInsertionBehavior:(int)a0 newCaretAffinity:(int)a1;
- (id)copyWithVisualRanges:(id)a0 headCharIndex:(unsigned long long)a1 tailCharIndex:(unsigned long long)a2 rightToLeft:(BOOL)a3 sameLine:(BOOL)a4;
- (BOOL)p_isEqual:(id)a0;
- (id)copyWithNewRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 newCaretAffinity:(int)a1;
- (id)constrainToRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containsCharacterAtIndex:(unsigned long long)a0 withOptions:(unsigned long long)a1;

@end
