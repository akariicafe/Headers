@class NSString, AVPlayerItem, ISLivePhotoUIView;

@interface PXDisplayAssetLivePhotoUIView : PXDisplayAssetUIView <PXChangeObserver> {
    ISLivePhotoUIView *_livePhotoView;
    long long _requestID;
}

@property (retain, nonatomic) AVPlayerItem *videoPlayerItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContent;
- (void).cxx_destruct;
- (void)_updateLivePhotoPlayerItem;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (BOOL)isDisplayingFullQualityContent;
- (long long)playbackStyle;
- (void)_handlePlayerItemResult:(id)a0 info:(id)a1 requestID:(long long)a2;
- (id)contentView;
- (void)imageDidChange;

@end
