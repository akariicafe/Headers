@class NSString, NSMutableArray, NSObject;
@protocol TSDContainerInfo, TSDMutableContainerInfo;

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep> {
    NSMutableArray *mChildReps;
}

@property (readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)hitRep:(struct CGPoint { double x0; double x1; })a0 withGesture:(id)a1 passingTest:(id /* block */)a2;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)hitRep:(struct CGPoint { double x0; double x1; })a0;
- (id)childReps;
- (void)addAdditionalChildLayersToArray:(id)a0;
- (BOOL)canSelectChildRep:(id)a0;
- (void)selectChildRep:(id)a0;
- (id)childRepsForHitTesting;
- (void)setChildReps:(id)a0;
- (void)addChildRep:(id)a0;
- (void)insertChildRep:(id)a0 atIndex:(unsigned long long)a1;
- (void)insertChildRep:(id)a0 below:(id)a1;
- (void)insertChildRep:(id)a0 above:(id)a1;
- (void)removeChildRep:(id)a0;
- (void)replaceChildRep:(id)a0 with:(id)a1;
- (BOOL)mustDrawOnMainThreadForInteractiveCanvas;
- (id)hitReps:(struct CGPoint { double x0; double x1; })a0 withSlopBlock:(id /* block */)a1;
- (id)hitRepChrome:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)canDrawInParallel;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (void)recursivelyPerformSelector:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
- (id)hitRepChrome:(struct CGPoint { double x0; double x1; })a0 passingTest:(id /* block */)a1;
- (void)updateChildrenFromLayout;
- (void)willReplaceContentsFromRep:(id)a0;
- (void)replaceContentsFromRep:(id)a0;
- (id)visibleChildLayouts;

@end
