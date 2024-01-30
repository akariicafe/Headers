@class NSString;
@protocol SKStoreRemoteViewControllerDelegate;

@interface SKStoreRemoteViewController : _UIRemoteViewController <SKStoreExtensionClientInterface>

@property (weak, nonatomic) id<SKStoreRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)presentRequestedViewControllerWithIdentifier:(id)a0;
- (void)setNeedsTabSelection;

@end
