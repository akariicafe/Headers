@class EDReference;

@interface EDPane : NSObject {
    double mXSplitPosition;
    double mYSplitPosition;
    EDReference *mTopLeftCell;
    int mActivePane;
    int mPaneState;
}

+ (id)pane;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (int)paneState;
- (void)setPaneState:(int)a0;
- (void)setActivePane:(int)a0;
- (void)setXSplitPosition:(double)a0;
- (void)setYSplitPosition:(double)a0;
- (void)setTopLeftCell:(id)a0;
- (int)activePane;
- (double)xSplitPosition;
- (double)ySplitPosition;
- (id)topLeftCell;

@end
