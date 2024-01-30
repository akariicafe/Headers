@class NSString, SBFDeviceBlockTimer;
@protocol SBFBlockStatusProvider;

@interface CSDeviceBlockViewController : CSModalViewControllerBase <CSModalViewDelegate> {
    id<SBFBlockStatusProvider> _blockStatusProvider;
    SBFDeviceBlockTimer *_blockTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)presentationPriority;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)_updateText;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithDeviceBlockStatusProvider:(id)a0;
- (void)viewDidLoad;
- (void)handleSecondaryActionForView:(id)a0;

@end
