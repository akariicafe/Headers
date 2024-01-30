@class NSString, NSMapTable, NSObject;
@protocol PXPlacesMapLayoutResult, PXPlacesMapPipelineComponentProvider, OS_dispatch_semaphore;

@interface PXPlacesMapInPlaceUpdatePlan : NSObject <PXPlacesMapUpdatePlan> {
    NSObject<OS_dispatch_semaphore> *_sema;
}

@property (retain) id<PXPlacesMapLayoutResult> currentLayoutResult;
@property (retain) NSMapTable *currentLayoutItemToAnnotationTable;
@property (weak, nonatomic) id<PXPlacesMapPipelineComponentProvider> pipelineComponentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)_changesBetweenSourceLayoutResult:(id)a0 targetLayoutResult:(id)a1;
- (id)annotationForLayoutItem:(id)a0;
- (id)removalPlanResult;
- (id)resultForNewLayoutResult:(id)a0;

@end
