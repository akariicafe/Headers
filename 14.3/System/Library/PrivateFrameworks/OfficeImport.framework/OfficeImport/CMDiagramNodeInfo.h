@interface CMDiagramNodeInfo : NSObject {
    int mTreeDepth;
    int mRow;
    struct ODIHRange { float mMid; float mLength; } mXRange;
    BOOL mConnectToVerticalSide;
    int mExtraRowsBetweenParentAndSelf;
    float mXOffsetRelativeToParent;
    struct ODIHRangeVector { struct ODIHRange *x0; struct ODIHRange *x1; struct __compressed_pair<ODIHRange *, ChAllocator<ODIHRange> > { struct ODIHRange *x0; } x2; } *mXRanges;
}

- (id)init;
- (void)dealloc;
- (int)row;
- (void)setRow:(int)a0;
- (struct ODIHRange { float x0; float x1; })xRange;
- (struct ODIHRangeVector { struct ODIHRange *x0; struct ODIHRange *x1; struct __compressed_pair<ODIHRange *, ChAllocator<ODIHRange> > { struct ODIHRange *x0; } x2; } *)xRanges;
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
