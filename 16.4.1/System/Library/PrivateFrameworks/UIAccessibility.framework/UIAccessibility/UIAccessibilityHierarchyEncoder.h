@class UIAccessibilityElementTraversalOptions;

@interface UIAccessibilityHierarchyEncoder : NSObject

@property (retain, nonatomic) id rootElement;
@property (retain, nonatomic) UIAccessibilityElementTraversalOptions *traversalOptions;
@property (nonatomic) BOOL shouldResolveRemoteElements;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_convertAccessibilityFrameOfElement:(id)a0 toViewSpaceOfContainer:(id)a1 remoteParent:(id)a2;
- (void)_resolveLeafElementsForRemoteElement:(id)a0 rootElement:(id)a1 addingToLeafElementDescriptions:(id)a2;
- (id)encodeWithError:(id *)a0;
- (id)encodeWithLeafElements:(id)a0 error:(id *)a1;
- (id)initWithRootElement:(id)a0 traversalOptions:(id)a1;

@end
