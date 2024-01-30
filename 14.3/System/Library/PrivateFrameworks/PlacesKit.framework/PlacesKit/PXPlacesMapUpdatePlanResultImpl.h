@class NSString, NSMutableSet;

@interface PXPlacesMapUpdatePlanResultImpl : NSObject <PXPlacesMapUpdatePlanResult>

@property (readonly) NSMutableSet *annotationsToAddImmediately;
@property (readonly) NSMutableSet *annotationsToRemoveImmediately;
@property (readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasStarted;
@property (readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasEnded;
@property (readonly) NSMutableSet *annotationsToRedraw;
@property (readonly) NSMutableSet *annotationsWithUpdatedIndex;
@property (readonly) NSMutableSet *overlaysToAddImmediately;
@property (readonly) NSMutableSet *overlaysToRemoveImmediately;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
