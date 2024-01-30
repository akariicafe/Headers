@class NSString;

@interface PKRemoteAddSecureElementPassViewController : _UIRemoteViewController <PKRemoteAddSecureElementPassViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)didFinishWithPasses:(id)a0 error:(id)a1;

@end
