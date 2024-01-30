@class NSArray, TPDrawablesZOrder;

@interface TPPaginatedPageInfo : TPPageInfo

@property (readonly, nonatomic) NSArray *floatingDrawableInfos;
@property (readonly, nonatomic) TPDrawablesZOrder *drawablesZOrder;
@property (readonly, nonatomic) BOOL isDocumentSetupPage;

- (id)pageController;
- (Class)repClass;
- (Class)layoutClass;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;
- (id)orderedDrawables:(id)a0;

@end
