@class NSString;

@interface PKRemoteAddSecureElementPassViewController : _UIRemoteViewController <PKRemoteAddSecureElementPassViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)didFinishWithPasses:(id)a0 error:(id)a1;
- (void)viewServiceDidTerminateWithError:(id)a0;

@end
