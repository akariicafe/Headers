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

- (void)validate;
- (id)path;
- (BOOL)isInvisible;
- (void)dealloc;
- (void)invalidatePath;
- (BOOL)supportsRotation;
- (void)invalidateConnections;
- (void)parentDidChange;
- (void)invalidatePosition;
- (void)processChangedProperty:(int)a0;
- (BOOL)shouldDisplayGuides;
- (int)wrapType;
- (id)reliedOnLayouts;
- (id)additionalLayoutsForRepCreation;
- (BOOL)canFlip;
- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (BOOL)canBeIntersected;
- (BOOL)canEndpointsCoincide;
- (BOOL)canResetTextAndObjectHandles;
- (void)checkConnections;
- (id)clipPath:(id)a0 onLayout:(id)a1 outset:(double)a2 reversed:(BOOL)a3 isValid:(BOOL *)a4;
- (void)connectedLayoutInvalidated:(id)a0;
- (id)connectionLineInfo;
- (struct CGPoint { double x0; double x1; })controlPointForPointA:(struct CGPoint { double x0; double x1; })a0 pointB:(struct CGPoint { double x0; double x1; })a1 andOriginalA:(struct CGPoint { double x0; double x1; })a2 originalB:(struct CGPoint { double x0; double x1; })a3;
- (id)createConnectedPathFrom:(id)a0 to:(id)a1 withControlPoints:(struct CGPoint { double x0; double x1; }[3])a2;
- (void)endDynamicOperation;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })i_accumulatedDrag;
- (BOOL)isStraightLine;
- (id)layoutInfoGeometry;
- (id)p_infoForConnectingToInfo:(id)a0;
- (BOOL)pathIsLineSegment;
- (BOOL)pathIsOpen;
- (id)pathSource;
- (void)pauseDynamicTransformation;
- (void)removeConnections;
- (BOOL)shouldValidate;
- (BOOL)supportsFlipping;
- (BOOL)supportsResize;
- (struct CGPoint { double x0; double x1; })unclippedHeadPoint;
- (struct CGPoint { double x0; double x1; })unclippedTailPoint;
- (void)updateConnectedPath;
- (void)updateRepPath;

@end
