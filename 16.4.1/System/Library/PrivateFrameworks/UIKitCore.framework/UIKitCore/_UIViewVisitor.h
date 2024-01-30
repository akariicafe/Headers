@interface _UIViewVisitor : NSObject

@property (nonatomic) BOOL tracksHierarchy;
@property (nonatomic) BOOL _currentlyVisitingHierarchy;
@property (readonly, nonatomic) unsigned long long traversalDirection;
@property (nonatomic) BOOL visitMaskViews;

+ (void)_startTraversalOfVisitor:(id)a0 withView:(id)a1;
+ (void)_addHierarchyTrackingVisitor:(id)a0;
+ (void)_removeHierarchyTrackingVisitor:(id)a0;

- (id)initWithTraversalDirection:(unsigned long long)a0;
- (BOOL)_prepareVisitor:(id)a0 toVisitView:(id)a1 changedSubview:(id)a2 previousWindow:(id)a3 previousSuperview:(id)a4;
- (BOOL)_visitView:(id)a0;

@end
