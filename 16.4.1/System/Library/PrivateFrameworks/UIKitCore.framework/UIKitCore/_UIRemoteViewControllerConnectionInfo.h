@class NSArray, BSMachPortSendRight, _UIHostedWindowHostingHandle, _UIViewServiceInterface;

@interface _UIRemoteViewControllerConnectionInfo : NSObject

@property (retain) _UIViewServiceInterface *interface;
@property (retain) id viewControllerOperatorProxy;
@property (retain) id serviceViewControllerProxy;
@property (retain) id serviceViewControllerControlMessageProxy;
@property (retain) id textEffectsOperatorProxy;
@property (retain) NSArray *serviceViewControllerSupportedInterfaceOrientations;
@property (retain) BSMachPortSendRight *serviceAccessibilityServerPortWrapper;
@property long long preferredStatusBarStyle;
@property int preferredStatusBarVisibility;
@property (retain) _UIHostedWindowHostingHandle *hostedWindowHostingHandle;
@property (retain) _UIHostedWindowHostingHandle *textEffectsWindowHostingHandle;
@property (retain) _UIHostedWindowHostingHandle *textEffectsWindowAboveStatusBarHostingHandle;
@property (retain) _UIHostedWindowHostingHandle *remoteKeyboardsWindowHostingHandle;

- (void).cxx_destruct;

@end
