@class PUMergedLivePhotosVideo, NSString, PUMergedLivePhotosVideoRequest, ISLivePhotoPlayer, NSError, PUBrowsingViewModel;

@interface PUOneUpMergedVideoProvider : PXObservable <PUBrowsingViewModelChangeObserver, PXChangeObserver>

@property (retain, nonatomic) PUMergedLivePhotosVideo *mergedVideo;
@property (nonatomic) long long state;
@property (retain, nonatomic) PUMergedLivePhotosVideoRequest *currentRequest;
@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (readonly, nonatomic) ISLivePhotoPlayer *livePhotoPlayer;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_updateLivePhotoPlayerItem;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_handleRequestChanges:(id)a0;
- (void)setError:(id)a0;
- (id)initWithBrowsingViewModel:(id)a0;
- (id)mutableChangeObject;
- (void)_handleViewModelChanges;
- (void).cxx_destruct;

@end
