@class NSString;

@interface PKRemotePerformActionSetupViewController : _UIRemoteViewController <PKRemotePerformActionSetupViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)didCancelAction;
- (void)didPerformAction;

@end
