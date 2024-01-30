@class NSString, PXGDisplayAssetVideoPresentationController;

@interface PXMessagesStackPlaybackControlViewModel : PXObservable <PXMutableMessagesStackPlaybackControlViewModel>

@property (readonly, nonatomic, getter=isSettled) BOOL settled;
@property (readonly, nonatomic) long long currentItem;
@property (readonly, nonatomic) PXGDisplayAssetVideoPresentationController *videoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
