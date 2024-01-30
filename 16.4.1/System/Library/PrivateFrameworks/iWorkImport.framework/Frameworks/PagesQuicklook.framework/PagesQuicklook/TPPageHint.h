@class NSSet, TSUNoCopyDictionary, NSArray, NSString, NSObject, NSDictionary;
@protocol TSDHint, TSWPTopicNumberHints;

@interface TPPageHint : NSObject <TSWPOffscreenColumn> {
    NSArray *_hints;
    TSUNoCopyDictionary *_flowHints;
    NSObject<TSWPTopicNumberHints> *_topicNumberHints;
    NSDictionary *_flowTopicNumberHints;
    BOOL _isCopyForCaching;
}

@property (nonatomic) long long pageKind;
@property (nonatomic) unsigned long long pageColumn;
@property (nonatomic) unsigned long long pageRow;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } footnoteAutoNumberRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } footnoteLayoutRange;
@property (nonatomic) BOOL hasForcedFootnotes;
@property (retain, nonatomic) TSUNoCopyDictionary *anchoredDrawablePositions;
@property (retain, nonatomic) NSSet *startingPartitionedAttachments;
@property (readonly, nonatomic) id<TSDHint> firstChildHint;
@property (readonly, nonatomic) id<TSDHint> lastChildHint;
@property (retain, nonatomic) NSArray *childHints;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *topicNumberHints;
@property (readonly, nonatomic) unsigned long long lineCount;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } anchoredRange;
@property (readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property (readonly, nonatomic) BOOL lastLineIsEmptyAndHasListLabel;
@property (readonly, nonatomic) BOOL terminatedByBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)hints;
- (id)firstColumn;
- (id)copyForArchiving;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1 context:(id)a2;
- (void)trimToCharIndex:(unsigned long long)a0 inTarget:(id)a1 removeFootnoteReferenceCount:(unsigned long long)a2 removeAutoNumberFootnoteCount:(unsigned long long)a3;
- (id)lastColumn;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_range;
- (id)copyForCaching;
- (id)firstHint;
- (id)flowHints;
- (id)flowTopicNumberHints;
- (id)lastHint;
- (void)offsetStartCharIndexBy:(long long)a0 charIndex:(unsigned long long)a1;
- (void)p_archiveHint:(id)a0 intoArchive:(void *)a1;
- (void)p_archiveTopicNumberHints:(id)a0 intoArchive:(void *)a1 archiver:(id)a2;
- (BOOL)p_unarchiveHint:(id)a0 fromArchive:(const void *)a1;
- (void)p_unarchiveTopicNumberHints:(id)a0 fromArchive:(const void *)a1 unarchiver:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAndChildHints:(out id *)a0;
- (void)setFlowHints:(id)a0 flowTopicNumberHints:(id)a1;
- (void)setHints:(id)a0 topicNumberHints:(id)a1;
- (BOOL)syncsFlowRanges:(id)a0 withEndOfPageHint:(id)a1;
- (BOOL)syncsWithEndOfPageHint:(id)a0 bodyStorage:(id)a1 flowRanges:(id)a2;
- (void)updateRangeForIndexPath:(id)a0 withStorage:(id)a1;

@end
