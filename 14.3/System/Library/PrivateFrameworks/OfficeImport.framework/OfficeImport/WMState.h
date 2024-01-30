@class NSMutableDictionary, WDParagraph, WDText, CMOutlineState;

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

@property (retain) WDParagraph *currentParagraph;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (void)setCurrentPage:(unsigned int)a0;
- (float)pageHeight;
- (void)setPageHeight:(float)a0;
- (unsigned int)currentPage;
- (float)pageOffset;
- (float)topMargin;
- (BOOL)isFrame;
- (float)leftMargin;
- (BOOL)isHeaderOrFooter;
- (float)totalPageHeight;
- (void)setTotalPageHeight:(float)a0;
- (unsigned long long)runIndex;
- (void)setRunIndex:(unsigned long long)a0;
- (BOOL)isCurrentListDefinitionId:(int)a0;
- (id)listStateForListDefinitionWithId:(int)a0 settingUpStateIfNeededWithDocument:(id)a1;
- (void)setCurrentListState:(id)a0;
- (id)currentListState;
- (void)setBlockIndex:(unsigned long long)a0;
- (unsigned long long)blockIndex;
- (void)setIsFrame:(BOOL)a0;
- (void)setIsFrameStart:(BOOL)a0;
- (void)setIsFrameEnd:(BOOL)a0;
- (BOOL)isFrameEnd;
- (BOOL)isFrameStart;
- (void)setLastHeader:(id)a0;
- (id)lastHeader;
- (void)setIsHeaderOrFooter:(BOOL)a0;
- (void)setLastFooter:(id)a0;
- (id)lastFooter;
- (void)clearCurrentListState;
- (BOOL)isCurrentListStateOverridden;
- (id)listStateForListDefinitionId:(int)a0;
- (void)setListState:(id)a0 forListDefinitionId:(int)a1;
- (id)outlineState;

@end
