@class NSMutableDictionary, NSMutableSet, NSMapTable;
@protocol PULoadingStatusManagerDelegate;

@interface PULoadingStatusManager : NSObject {
    struct { BOOL respondsToDidUpdateLoadingStatusForItem; } _delegateFlags;
}

@property (nonatomic, setter=_setUpdateScheduled:) BOOL _isUpdateScheduled;
@property (readonly, nonatomic) NSMutableSet *_invalidLoadingStatusItems;
@property (readonly, nonatomic) NSMapTable *_loadOperationTrackingIDsByItem;
@property (readonly, nonatomic) NSMapTable *_loadingStatusByItem;
@property (readonly, nonatomic) NSMutableDictionary *_itemByLoadOperationTrackingID;
@property (readonly, nonatomic) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID;
@property (weak, nonatomic) id<PULoadingStatusManagerDelegate> delegate;

- (void)_updateLoadingStatusForItemIfNeeded:(id)a0;
- (void)_invalidateLoadingStatusForItem:(id)a0;
- (id)willBeginLoadOperationWithItem:(id)a0;
- (void)didUpdateLoadOperationWithTrackingID:(id)a0 withProgress:(double)a1;
- (void)_updateLoadingStatusForItem:(id)a0;
- (void)_resetLoadingStatusForItemIfAppropriate:(id)a0;
- (void)_updateNowIfNeeded;
- (void)didCancelLoadOperationWithTrackingID:(id)a0;
- (id)loadingStatusForItem:(id)a0;
- (void)_setLoadingStatus:(id)a0 forItem:(id)a1;
- (void)_setLoadingStatus:(id)a0 forLoadOperationTrackingID:(id)a1;
- (void)_updateIfNeeded;
- (void)didCompleteLoadOperationWithTrackingID:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)_updateLoadingStatusForItemsIfNeeded;

@end
