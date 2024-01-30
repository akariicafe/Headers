@class NSString;

@interface ICDocCamNavigationController : UINavigationController <DCUnsavedDataDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveMemoryWarning;
- (id)initWithDelegate:(id)a0;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)_preferredModalPresentationStyle;
- (BOOL)shouldAutorotate;
- (void)prepareForDismissal;

@end
