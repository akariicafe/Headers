@class NSString, PXCPLUIStatusProvider;
@protocol PXDisplayAssetFetchResult, PXDisplayMomentShare, PXSectionedFetchResult;

@interface PXMomentShareStatus : PXObservable <PXPhotoLibraryUIChangeObserver, PXMutableMomentShareStatus> {
    PXCPLUIStatusProvider *_statusProvider;
}

@property (readonly, nonatomic) id<PXDisplayMomentShare> momentShare;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> copyingAssetsFetchResult;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> copiedAssetsFetchResult;
@property (readonly, nonatomic) id<PXDisplayAssetFetchResult> allAssetsFetchResult;
@property (readonly, nonatomic) id<PXSectionedFetchResult> participantsFetchResult;
@property (readonly, nonatomic) PXCPLUIStatusProvider *statusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)setMomentShare:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)owner;
- (id)_actionManager;
- (id)initWithMomentShare:(id)a0;
- (void)setCopyingAssetsFetchResult:(id)a0;
- (void)setCopiedAssetsFetchResult:(id)a0;
- (void)setAllAssetsFetchResult:(id)a0;
- (void)setParticipantsFetchResult:(id)a0;

@end
