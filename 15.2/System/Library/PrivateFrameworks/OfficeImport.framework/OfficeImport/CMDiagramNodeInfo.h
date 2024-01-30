@interface CMDiagramNodeInfo : NSObject {
    int mTreeDepth;
    int mRow;
    struct ODIHRange { float mMid; float mLength; } mXRange;
    BOOL mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    void *mXRanges;
}

- (void)setRow:(int)a0;
- (int)row;
- (id)init;
- (void)dealloc;
- (struct ODIHRange { float x0; float x1; })xRange;
- (void *)xRanges;
- (void)setXRange:(struct ODIHRange { float x0; float x1; })a0;
- (int)treeDepth;
- (void)setTreeDepth:(int)a0;
- (BOOL)connectToVerticalSide;
- (void)setConnectToVerticalSide:(BOOL)a0;
- (int)extraRowsBetweenParentAndSelf;
- (void)setExtraRowsBetweenParentAndSelf:(int)a0;
- (float)xOffsetRelativeToParent;
- (void)setXOffsetRelativeToParent:(float)a0;
- (void)addToXOffsetRelativeToParent:(float)a0;

@end
