@class NSString, TSDBezierPath, TSDWrapPolygon, NSMutableArray;

@interface SXContainerLayout : TSDContainerLayout <TSDWrappable> {
    TSDWrapPolygon *mCachedWrapPolygon;
    TSDBezierPath *mCachedWrapPath;
    TSDBezierPath *mCachedExternalWrapPath;
}

@property (retain, nonatomic) NSMutableArray *oldchildLayouts;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (void)invalidate;
- (void)dealloc;
- (int)wrapType;
- (void)setGeometry:(id)a0;
- (id)wrapPolygon;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (void)updateChildrenFromInfo;
- (BOOL)isHTMLWrap;
- (int)wrapDirection;
- (int)wrapFitType;
- (id)additionalLayouts;
- (id)childrenForLayout;
- (void)childLayoutCreated:(id)a0;
- (id)i_exteriorTextWrap;
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
