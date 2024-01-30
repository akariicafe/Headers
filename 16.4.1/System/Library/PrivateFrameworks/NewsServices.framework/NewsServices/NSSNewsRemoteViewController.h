@class NSString;

@interface NSSNewsRemoteViewController : _UIRemoteViewController <NAVNewsArticleViewerRemoteProviderType>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dismissAnimated:(BOOL)a0;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)articleViewerRemoteProviderShouldDismissAnimated:(BOOL)a0;

@end
