@class SXTextExclusionPath, TSDWrapPolygon, NSString;

@interface SXTextExclusionPathWrapper : NSObject <TSDWrappable>

@property (readonly, nonatomic) BOOL isRectangular;
@property (readonly, nonatomic) TSDWrapPolygon *myWrapPolygon;
@property (readonly, weak, nonatomic) SXTextExclusionPath *exclusionPath;
@property (readonly, nonatomic) BOOL hasAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)parent;
- (int)wrapType;
- (id)wrapPolygon;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInfluencingExteriorWrap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsInRoot;
- (id)initWithTextExclusionPath:(id)a0;
- (BOOL)isHTMLWrap;
- (int)wrapDirection;
- (int)wrapFitType;

@end
