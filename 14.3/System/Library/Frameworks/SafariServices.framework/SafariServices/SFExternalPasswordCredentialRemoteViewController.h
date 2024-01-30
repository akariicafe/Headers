@class NSString;
@protocol SFExternalPasswordCredentialRemoteViewControllerDelegate;

@interface SFExternalPasswordCredentialRemoteViewController : SFPasswordRemoteViewController <SFExternalPasswordCredentialRemoteViewControllerProtocol>

@property (weak, nonatomic) id<SFExternalPasswordCredentialRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)passwordServiceViewControllerName;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)presentExternalPasswordCredentialRemoteViewController;
- (BOOL)_canShowWhileLocked;

@end
