@class NSString;

@interface TSWPTargetHint : NSObject <TSWPOffscreenColumn, NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameBounds;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } anchoredRange;
@property (nonatomic) unsigned long long columnCount;
@property (nonatomic) unsigned long long lineFragmentCount;
@property (nonatomic) BOOL usedParagraphHeights;
@property (nonatomic) BOOL endOfLayout;
@property (nonatomic) BOOL lastLineIsEmptyAndHasListLabel;
@property (nonatomic) BOOL textIsVertical;
@property (nonatomic) BOOL terminatedByBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)trimToCharIndex:(unsigned long long)a0 inTarget:(id)a1 removeFootnoteReferenceCount:(unsigned long long)a2 removeAutoNumberFootnoteCount:(unsigned long long)a3;

@end
