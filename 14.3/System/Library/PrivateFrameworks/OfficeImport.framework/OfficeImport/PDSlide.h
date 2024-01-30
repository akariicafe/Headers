@class PDSlideLayout, PDNotesSlide, NSMutableArray, OITSUNoCopyDictionary;

@interface PDSlide : PDSlideChild {
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
}

@property (retain) OITSUNoCopyDictionary *commentParents;

- (id)background;
- (void)addComment:(id)a0;
- (void).cxx_destruct;
- (id)transition;
- (unsigned long long)commentCount;
- (id)description;
- (id)defaultTheme;
- (id)slideLayout;
- (id)parentSlideBase;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (void)setSlideLayout:(id)a0;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)notesSlide;
- (void)setNotesSlide:(id)a0;
- (id)commentAtIndex:(unsigned long long)a0;
- (id)commentForAuthorId:(unsigned long long)a0 authorIdx:(unsigned long long)a1;
- (void)setInheritedTextStyle:(id)a0 placeholderType:(int)a1 defaultTextListStyle:(id)a2;
- (id)inheritedTextStyleForPlaceholderType:(int)a0;

@end
