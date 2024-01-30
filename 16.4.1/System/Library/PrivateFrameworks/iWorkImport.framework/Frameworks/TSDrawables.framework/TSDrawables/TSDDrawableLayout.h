@class TSDLayoutGeometry, NSString, TSDWrapSegments, TSUBezierPath;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable> {
    TSUBezierPath *mCachedWrapPath;
    TSDWrapSegments *mCachedWrapSegments;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    TSUBezierPath *mCachedExteriorWrapPath;
}

@property (readonly, nonatomic) BOOL hasAlpha;
@property (copy, nonatomic) TSDLayoutGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)parentDidChange;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)allowsConnections;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (id)i_computeWrapPath;
- (id)i_computeWrapPathClosed:(BOOL)a0;
- (void)i_invalidateWrap;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (void)invalidateParentForWrap;
- (BOOL)isHTMLWrap;
- (void)processChangedProperty:(int)a0;
- (int)wrapDirection;
- (int)wrapFitType;
- (int)wrapType;
- (id)visibleGeometries;
- (id)wrapPath;
- (id)pathForClippingConnectionLines;
- (id)wrapSegments;
- (id)i_wrapPathIncludingTitleAndCaption;
- (void)inRootGeometryChangedBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)invalidateInRootGeometry;
- (void)p_addVisibleGeometriesFromInfo:(id)a0 intoArray:(id)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
- (id)p_exteriorTextWrapPath;

@end
