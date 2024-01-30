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

- (void)_setLoadingStatus:(id)a0 forLoadOperationTrackingID:(id)a1;
- (void)_updateIfNeeded;
- (void)_invalidateLoadingStatusForItem:(id)a0;
- (void)_updateLoadingStatusForItemIfNeeded:(id)a0;
- (BOOL)_needsUpdate;
- (void)didCompleteLoadOperationWithTrackingID:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (void)_updateLoadingStatusForItem:(id)a0;
- (id)willBeginLoadOperationWithItem:(id)a0;
- (void)didCancelLoadOperationWithTrackingID:(id)a0;
- (void)_setLoadingStatus:(id)a0 forItem:(id)a1;
- (void)_updateNowIfNeeded;
- (void)_updateLoadingStatusForItemsIfNeeded;
- (void)_setNeedsUpdate;
- (id)init;
- (void)didUpdateLoadOperationWithTrackingID:(id)a0 withProgress:(double)a1;
- (id)loadingStatusForItem:(id)a0;
- (void)_resetLoadingStatusForItemIfAppropriate:(id)a0;
- (void).cxx_destruct;

@end
