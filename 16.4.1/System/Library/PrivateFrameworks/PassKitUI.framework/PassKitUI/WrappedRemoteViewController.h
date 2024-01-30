@class NSString;

@interface WrappedRemoteViewController : _UIRemoteViewController <PKClientShareSecureElementPassViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;

- (void)didCreateShareURL:(id)a0 activationCode:(id)a1 error:(id)a2;
- (void)didFinishShareWithDidUserShare:(BOOL)a0 error:(id)a1;

@end
