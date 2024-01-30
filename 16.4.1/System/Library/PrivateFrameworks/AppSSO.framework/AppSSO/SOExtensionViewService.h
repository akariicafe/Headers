@class NSString, SORemoteExtensionContext;

@interface SOExtensionViewService : UIViewController <SORemoteExtensionViewProtocol>

@property (weak) SORemoteExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)exportedInterface;
- (void).cxx_destruct;
- (void)loadView;
- (void)_connectChildView;
- (void)connectToContextWithSessionID:(id)a0 completion:(id /* block */)a1;
- (id)remoteViewControllerInterface;

@end
