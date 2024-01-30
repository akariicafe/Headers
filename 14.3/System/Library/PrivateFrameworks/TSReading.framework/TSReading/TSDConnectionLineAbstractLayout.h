@class TSDInfoGeometry, TSDBezierPath, TSDLayout, TSDConnectionLinePathSource;

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout {
    TSDBezierPath *mClippedBezierPath;
    TSDConnectionLinePathSource *mOriginalPathSource;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSDBezierPath *mCachedFromWrapPath;
    TSDBezierPath *mCachedToWrapPath;
    double mCachedFromOutset;
    double mCachedToOutset;
    TSDBezierPath *mCachedFromOutsetWrapPath;
    TSDBezierPath *mCachedToOutsetWrapPath;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    BOOL mValidConnections;
    BOOL mVisibleLine;
    struct CGPoint { double x; double y; } mLooseEndPosition;
    struct CGPoint { double x; double y; } mAcumulatedDrag;
    BOOL mUseResizePoints[3];
    struct CGPoint { double x; double y; } mResizeControlPoints[3];
}

@property (nonatomic) TSDLayout *connectedFrom;
@property (nonatomic) TSDLayout *connectedTo;
@property (readonly, nonatomic) BOOL validLine;
@property (readonly, nonatomic) TSDConnectionLinePathSource *connectedPathSource;
@property (nonatomic) BOOL useDynamicOutsets;
@property (nonatomic) double dynamicOutsetFrom;
@property (nonatomic) double dynamicOutsetTo;
@property (readonly, nonatomic) double outsetFrom;
@property (readonly, nonatomic) double outsetTo;

- (BOOL)supportsRotation;
- (id)path;
- (BOOL)canFlip;
- (void)dealloc;
- (void)validate;
- (BOOL)isInvisible;
- (void)invalidatePath;
- (int)wrapType;
- (void)invalidatePosition;
- (BOOL)shouldDisplayGuides;
- (void)processChangedProperty:(int)a0;
- (void)parentDidChange;
- (void)invalidateConnections;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (void)connectedLayoutInvalidated:(id)a0;
- (BOOL)shouldValidate;
- (void)pauseDynamicTransformation;
- (id)reliedOnLayouts;
- (id)additionalLayoutsForRepCreation;
- (BOOL)supportsResize;
- (BOOL)supportsFlipping;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (id)pathSource;
- (BOOL)pathIsOpen;
- (BOOL)pathIsLineSegment;
- (id)layoutInfoGeometry;
- (BOOL)canBeIntersected;
- (BOOL)canResetTextAndObjectHandles;
- (struct CGPoint { double x0; double x1; })unclippedHeadPoint;
- (struct CGPoint { double x0; double x1; })unclippedTailPoint;
- (id)clipPath:(id)a0 onLayout:(id)a1 outset:(double)a2 reversed:(BOOL)a3 isValid:(BOOL *)a4;
- (BOOL)isStraightLine;
- (id)createConnectedPathFrom:(id)a0 to:(id)a1 withControlPoints:(struct CGPoint { double x0; double x1; }[3])a2;
- (struct CGPoint { double x0; double x1; })controlPointForPointA:(struct CGPoint { double x0; double x1; })a0 pointB:(struct CGPoint { double x0; double x1; })a1 andOriginalA:(struct CGPoint { double x0; double x1; })a2 originalB:(struct CGPoint { double x0; double x1; })a3;
- (struct CGPoint { double x0; double x1; })i_accumulatedDrag;
- (void)checkConnections;
- (void)removeConnections;
- (void)updateRepPath;
- (id)connectionLineInfo;
- (id)p_infoForConnectingToInfo:(id)a0;
- (BOOL)canEndpointsCoincide;
- (void)updateConnectedPath;

@end
