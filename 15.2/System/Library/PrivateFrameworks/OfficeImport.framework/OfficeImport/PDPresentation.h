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
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isKiosk;
- (BOOL)isAutoPlay;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)bulletBlips;
- (unsigned int)bulletBlipCount;
- (void)setSlideSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNotesSize:(struct CGSize { double x0; double x1; })a0;
- (void)setIsCommentsVisible:(BOOL)a0;
- (void)setIsLooping:(BOOL)a0;
- (void)setIsKiosk:(BOOL)a0;
- (void)addSlideMaster:(id)a0;
- (unsigned long long)commentAuthorCount;
- (void)addCommentAuthor:(id)a0;
- (struct CGSize { double x0; double x1; })slideSize;
- (void)cacheGraphicStylesForSlideBase:(id)a0;
- (void)addSlide:(id)a0;
- (void)addNotesMaster:(id)a0;
- (void)setIsAutoPlay:(BOOL)a0;
- (id)notesMasterAtIndex:(unsigned long long)a0;
- (id)commentAuthorAtIndex:(unsigned long long)a0;
- (unsigned long long)slideCount;
- (id)slideAtIndex:(unsigned long long)a0;
- (unsigned long long)slideMasterCount;
- (id)slideMasterAtIndex:(unsigned long long)a0;
- (unsigned long long)notesMasterCount;
- (unsigned long long)indexOfSlide:(id)a0;
- (id)bulletBlipAtIndex:(int)a0;
- (unsigned int)addBulletBlip:(id)a0;
- (struct CGSize { double x0; double x1; })notesSize;
- (BOOL)isCommentsVisible;
- (void)flushUnusedMastersAndLayouts;
- (void)ensureDefaultLayoutsForMasters;
- (void)cacheGraphicStyleForDrawable:(id)a0 colorContext:(id)a1;

@end
