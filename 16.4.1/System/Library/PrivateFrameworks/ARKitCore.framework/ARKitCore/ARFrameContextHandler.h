@class NSArray, NSMutableOrderedSet, ARFrameContext, NSMutableSet;

@interface ARFrameContextHandler : NSObject {
    NSMutableOrderedSet *_inFlightContexts;
    ARFrameContext *_mostRecentInFlightContext;
    NSMutableOrderedSet *_anchorsToAdd;
    NSMutableOrderedSet *_anchorsToRemove;
    NSMutableOrderedSet *_anchorsToStopTracking;
    BOOL _sessionTransformReset;
    NSMutableSet *_collaborationDatas;
}

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } sessionTransform;
@property (readonly, nonatomic) BOOL sessionTransformUpdated;
@property (readonly, nonatomic) NSArray *anchorsToAdd;

- (void)markFrameContextProcessed:(id)a0;
- (void)clearInFlightContextsReapplyingChanges;
- (id)createdContextByConsumingPendingChanges;
- (void)stopTrackingAnchors:(id)a0;
- (void)resetSessionTransform;
- (void)addAnchor:(id)a0;
- (void)addCollaborationData:(id)a0;
- (id)init;
- (void)removeAnchor:(id)a0;
- (void)clearAddedAnchors;
- (void).cxx_destruct;

@end
