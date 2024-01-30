@class NSObject, NSArray, AXRActionsCollectionView, AXRemoteDevice, UICollectionViewFlowLayout, NSString, AXEventProcessor;
@protocol OS_dispatch_queue;

@interface AXRConnectedDeviceViewController : UIViewController <AXRVoiceOverTouchPadViewDelegate, AXRDeviceActionsViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, AXRemoteDeviceConnectionDelegate> {
    NSObject<OS_dispatch_queue> *_eventSenderQueue;
}

@property (retain, nonatomic) AXRemoteDevice *activeDevice;
@property (retain, nonatomic) AXEventProcessor *eventProcessor;
@property (retain, nonatomic) AXRActionsCollectionView *actionsCollectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout;
@property (readonly, nonatomic) NSArray *remoteActionsToShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_moreButtonPressed;
- (id)initWithRemoteDevice:(id)a0;
- (void)remoteDeviceDidUnexpectedlyDisconnect:(id)a0;
- (void)_dismissCurrentPresentedViewController;
- (void)_performDeviceRemoteAction:(id)a0;
- (void)actionsViewController:(id)a0 selectedAction:(id)a1;
- (void)voiceOverTouchPadView:(id)a0 didReceiveCommand:(id)a1;

@end
