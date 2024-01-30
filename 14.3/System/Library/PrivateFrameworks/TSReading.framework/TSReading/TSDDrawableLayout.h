@class NSString, TSDWrapPolygon, TSDBezierPath;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable> {
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGeometry:(id)a0;
- (void)dealloc;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (int)wrapType;
- (void)invalidate;
- (id)wrapPolygon;
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
- (id)i_externalWrapPath;
- (BOOL)allowsConnections;
- (BOOL)supportsInspectorPositioning;

@end
