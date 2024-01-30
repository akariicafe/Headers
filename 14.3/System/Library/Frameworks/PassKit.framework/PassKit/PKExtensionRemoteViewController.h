@class NSString;
@protocol PKExtensionRemoteViewControllerDelegate;

@interface PKExtensionRemoteViewController : _UIRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol>

@property (weak, nonatomic) id<PKExtensionRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end
