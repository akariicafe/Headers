@interface MLChapterTOC : NSObject

- (id)titlePropertyOfChapterAtIndex:(unsigned int)a0;
- (unsigned int)countOfChapters;
- (unsigned int)countOfGroupsForProperty:(int)a0;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)a0;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)a0;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)a0;
- (struct ChapterData { } *)chapterDataRef;
- (unsigned int)chapterIndexAtTimeLocationInMS:(unsigned int)a0;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)a0 groupingProperty:(int)a1;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)a0 groupingProperty:(int)a1;
- (BOOL)hasDataForProperty:(int)a0;

@end
