@class NSString;
@protocol SFPasswordRemoteViewControllerDelegate;

@interface SFPasswordRemoteViewController : _UIRemoteViewController <SFPasswordRemoteViewControllerProtocol>

@property (weak, nonatomic) id<SFPasswordRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)passwordServiceViewControllerName;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)a0;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;

- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)willDismissServiceViewController;

@end
