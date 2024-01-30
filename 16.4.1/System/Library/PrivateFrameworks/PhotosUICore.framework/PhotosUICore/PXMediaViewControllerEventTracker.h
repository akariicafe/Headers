@class NSString, NSMutableDictionary, _PXTrackedMediaRecord;
@protocol PXDisplayAssetCollection, PXDisplayAsset;

@interface PXMediaViewControllerEventTracker : PXViewControllerEventTracker <PXMediaViewControllerEventTracker, PXChangeObserver> {
    BOOL _didInvalidateCurrentlyVisibleMediaOnce;
}

@property (retain, nonatomic) _PXTrackedMediaRecord *currentlyVisibleMediaRecord;
@property (retain, nonatomic) id lastVisibleMedia;
@property (nonatomic) long long mediaViewedSignpost;
@property (nonatomic) long long specificMediaViewedSignpost;
@property (readonly, nonatomic) NSString *viewName;
@property (retain, nonatomic) id<PXDisplayAsset> displayedAsset;
@property (retain, nonatomic) id<PXDisplayAssetCollection> displayedAssetCollection;
@property (copy, nonatomic) NSMutableDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logDidStartViewingMedia:(id)a0 mediaKind:(long long)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)logDidEndViewingMedia:(id)a0 mediaKind:(long long)a1 duration:(double)a2;
- (id)init;
- (id)initWithViewName:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateCurrentlyVisibleMedia;
- (void)_updateCurrentlyVisibleMedia;

@end
