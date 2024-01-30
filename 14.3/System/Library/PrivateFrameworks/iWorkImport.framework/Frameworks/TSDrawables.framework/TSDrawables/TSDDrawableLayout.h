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

- (void).cxx_destruct;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (int)wrapType;
- (void)invalidate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (BOOL)isHTMLWrap;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)i_computeWrapPath;
- (id)i_wrapPath;
- (void)invalidateParentForWrap;
- (void)invalidateExteriorWrap;
- (void)processChangedProperty:(int)a0;
- (void)parentDidChange;
- (void)i_invalidateWrap;
- (id)i_computeWrapPathClosed:(BOOL)a0;
- (BOOL)allowsConnections;
- (BOOL)supportsInspectorPositioning;
- (id)wrapPath;
- (id)visibleGeometries;
- (id)wrapSegments;
- (id)pathForClippingConnectionLines;
- (void)inRootGeometryChangedBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)invalidateInRootGeometry;
- (id)i_wrapPathIncludingTitleAndCaption;
- (id)p_exteriorTextWrapPath;
- (void)p_addVisibleGeometriesFromInfo:(id)a0 intoArray:(id)a1 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;

@end
