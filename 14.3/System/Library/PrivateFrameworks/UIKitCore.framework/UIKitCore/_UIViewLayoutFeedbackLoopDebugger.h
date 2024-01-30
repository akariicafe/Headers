@class NSArray, NSMutableSet, UIView, NSMutableArray;

@interface _UIViewLayoutFeedbackLoopDebugger : NSObject {
    long long _debuggingState;
    UIView *_rootView;
    NSMutableSet *_viewsWithChangingGeometry;
    NSMutableSet *_viewsWithVariableChangesTriggeringLayout;
    NSMutableSet *_turningPointViews;
    NSMutableSet *_involvedViews;
    NSMutableArray *_layoutList;
    NSArray *_reducedLayoutList;
    BOOL _rootViewConfirmed;
    BOOL _feedbackLoopConfirmed;
    long long _rootViewLayoutCount;
}

@property (retain, nonatomic) UIView *currentLayoutView;

+ (void)createLayoutFeedbackLoopDebuggerForUnitTests;
+ (void)destroyLayoutFeedbackLoopDebuggerForUnitTests;
+ (id)layoutFeedbackLoopDebugger;

- (void).cxx_destruct;
- (void)dumpInfoWithInfoCollectionSuccess:(BOOL)a0;
- (id)viewsWithVariableChangesTriggeringLayoutCreateIfNecessary;
- (id)turningPointViewsCreateIfNecessary;
- (void)_recordSetNeedsLayoutToLayerOfView:(id)a0;
- (void)willChangeGeometryForLayerOfView:(id)a0;
- (id)viewsWithChangingGeometryCreateIfNecessary;
- (id)topLevelViewHierarchyTrace;
- (id)description;
- (void)willSendSetPosition:(struct CGPoint { double x0; double x1; })a0 toLayerOfView:(id)a1;
- (void)willSendSetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toLayerOfView:(id)a1;
- (void)willSendSetBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toLayerOfView:(id)a1;
- (void)didSendSetNeedsLayoutToLayerOfView:(id)a0;
- (void)willSendSetNeedsLayoutToLayerOfView:(id)a0;
- (void)didSendLayoutSubviewsToView:(id)a0;
- (void)willSendLayoutSubviewsToView:(id)a0;
- (void)didEnterLayoutSublayersOfLayerForView:(id)a0;
- (void)willSendViewWillLayoutSubviewsToViewControllerOfView:(id)a0;
- (void)didSendViewWillLayoutSubviewsToViewControllerOfView:(id)a0;
- (void)willSendViewDidLayoutSubviewsToViewControllerOfView:(id)a0;
- (void)didSendViewDidLayoutSubviewsToViewControllerOfView:(id)a0;
- (void)willExitLayoutSublayersOfLayerForView:(id)a0;
- (void)willSendSetNeedsLayoutToView:(id)a0 becauseOfChangeInVariable:(id)a1 inLayoutEngine:(id)a2;

@end
