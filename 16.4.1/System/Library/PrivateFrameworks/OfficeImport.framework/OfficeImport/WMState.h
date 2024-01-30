@class WDText, NSMutableDictionary, NSMutableArray, CMOutlineState;

@interface WMState : CMState {
    CMOutlineState *currentListState;
    CMOutlineState *outlineState;
    NSMutableDictionary *listStates;
    WDText *mLastHeader;
    WDText *mLastFooter;
    unsigned int mCurrentPage;
    unsigned long long mBlockIndex;
    unsigned long long mRunIndex;
    float mTopMargin;
    float mLeftMargin;
    float mPageHeight;
    BOOL mIsFrame;
    BOOL mIsFrameStart;
    BOOL mIsFrameEnd;
    BOOL mIsHeaderOrFooter;
    float mTotalPageHeight;
}

@property (retain) NSMutableArray *paragraphStack;

- (float)leftMargin;
- (void)setCurrentPage:(unsigned int)a0;
- (void)setLeftMargin:(float)a0;
- (void)dealloc;
- (id)init;
- (unsigned int)currentPage;
- (float)topMargin;
- (void).cxx_destruct;
- (float)pageOffset;
- (float)pageHeight;
- (void)setPageHeight:(float)a0;
- (void)setTopMargin:(float)a0;
- (BOOL)containsParagraph:(id)a0;
- (BOOL)isFrame;
- (float)totalPageHeight;
- (unsigned long long)blockIndex;
- (void)clearCurrentListState;
- (id)currentListState;
- (BOOL)isCurrentListDefinitionId:(int)a0;
- (BOOL)isCurrentListStateOverridden;
- (BOOL)isFrameEnd;
- (BOOL)isFrameStart;
- (BOOL)isHeaderOrFooter;
- (id)lastFooter;
- (id)lastHeader;
- (id)listStateForListDefinitionId:(int)a0;
- (id)listStateForListDefinitionWithId:(int)a0 settingUpStateIfNeededWithDocument:(id)a1;
- (id)outlineState;
- (void)popParagraph;
- (void)pushParagraph:(id)a0;
- (unsigned long long)runIndex;
- (void)setBlockIndex:(unsigned long long)a0;
- (void)setCurrentListState:(id)a0;
- (void)setIsFrame:(BOOL)a0;
- (void)setIsFrameEnd:(BOOL)a0;
- (void)setIsFrameStart:(BOOL)a0;
- (void)setIsHeaderOrFooter:(BOOL)a0;
- (void)setLastFooter:(id)a0;
- (void)setLastHeader:(id)a0;
- (void)setListState:(id)a0 forListDefinitionId:(int)a1;
- (void)setRunIndex:(unsigned long long)a0;
- (void)setTotalPageHeight:(float)a0;

@end
