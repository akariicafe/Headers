@class NSMutableArray;

@interface PDPresentation : OCDDocument {
    NSMutableArray *mSlideMasters;
    NSMutableArray *mNotesMasters;
    NSMutableArray *mSlides;
    NSMutableArray *mBulletBlips;
    struct CGSize { double width; double height; } mSlideSize;
    struct CGSize { double width; double height; } mNotesSize;
    BOOL mIsAutoPlay;
    BOOL mIsCommentsVisible;
    BOOL mIsLooping;
    BOOL mIsKiosk;
    NSMutableArray *mCommentAuthors;
}

- (BOOL)isLooping;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setIsLooping:(BOOL)a0;
- (BOOL)isAutoPlay;
- (void)setIsAutoPlay:(BOOL)a0;
- (struct CGSize { double x0; double x1; })slideSize;
- (void)addSlideMaster:(id)a0;
- (void)addNotesMaster:(id)a0;
- (unsigned int)bulletBlipCount;
- (void)cacheGraphicStylesForSlideBase:(id)a0;
- (BOOL)isKiosk;
- (unsigned int)addBulletBlip:(id)a0;
- (void)addCommentAuthor:(id)a0;
- (void)addSlide:(id)a0;
- (id)bulletBlipAtIndex:(int)a0;
- (id)bulletBlips;
- (void)cacheGraphicStyleForDrawable:(id)a0 colorContext:(id)a1;
- (id)commentAuthorAtIndex:(unsigned long long)a0;
- (unsigned long long)commentAuthorCount;
- (void)ensureDefaultLayoutsForMasters;
- (void)flushUnusedMastersAndLayouts;
- (unsigned long long)indexOfSlide:(id)a0;
- (BOOL)isCommentsVisible;
- (id)notesMasterAtIndex:(unsigned long long)a0;
- (unsigned long long)notesMasterCount;
- (struct CGSize { double x0; double x1; })notesSize;
- (void)removeUnnecessaryOverrides;
- (void)setIsCommentsVisible:(BOOL)a0;
- (void)setIsKiosk:(BOOL)a0;
- (void)setNotesSize:(struct CGSize { double x0; double x1; })a0;
- (void)setSlideSize:(struct CGSize { double x0; double x1; })a0;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideAtIndex:(unsigned long long)a0;
- (unsigned long long)slideCount;
- (id)slideMasterAtIndex:(unsigned long long)a0;
- (unsigned long long)slideMasterCount;

@end
