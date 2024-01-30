@class NSString, NSMutableDictionary;
@protocol PXDisplayAssetCollection, PXDisplayAsset;

@interface PXMediaViewControllerEventTracker : PXViewControllerEventTracker <PXMediaViewControllerEventTracker, PXChangeObserver> {
    BOOL _didInvalidateCurrentlyVisibleMediaOnce;
}

@property (retain, nonatomic) id currentlyVisibleMedia;
@property (retain, nonatomic) id lastVisibleMedia;
@property (readonly, nonatomic) double currentlyVisibleMediaTimestamp;
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

- (id)initWithViewName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateCurrentlyVisibleMedia;
- (void)_updateCurrentlyVisibleMedia;
- (void)_logDidStartViewingMedia:(id)a0;
- (void)_logDidEndViewingMedia:(id)a0 duration:(double)a1;

@end
