@class NSString, CPSClipMetadata, NSURL, NSNumber, CPSLaunchContentViewController;
@protocol CPSLaunchViewControllerDelegate;

@interface CPSLaunchViewController : UIViewController <PRXFlowDelegate, CPSLaunchContentViewControllerDelegate> {
    CPSLaunchContentViewController *_launchContentViewController;
    CPSClipMetadata *_metadata;
    NSURL *_url;
}

@property (readonly, nonatomic) CPSLaunchContentViewController *launchViewController;
@property (retain, nonatomic, setter=uiMock_setOpenButtonEnabled:) NSNumber *uiMock_openButtonEnabled;
@property (weak, nonatomic) id<CPSLaunchViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (id)initWithURL:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_dismiss;
- (BOOL)_canShowWhileLocked;
- (void)launchContentViewControllerDidDisappear:(id)a0 didOpenClip:(BOOL)a1;
- (void)proxCardFlowDidDismiss;
- (id)initWithClipURL:(id)a0 metadata:(id)a1;

@end
