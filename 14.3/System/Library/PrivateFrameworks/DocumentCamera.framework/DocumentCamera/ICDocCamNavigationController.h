@class NSString;

@interface ICDocCamNavigationController : UINavigationController <DCUnsavedDataDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDismissal;
- (BOOL)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (long long)_preferredModalPresentationStyle;
- (id)initWithDelegate:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;

@end
