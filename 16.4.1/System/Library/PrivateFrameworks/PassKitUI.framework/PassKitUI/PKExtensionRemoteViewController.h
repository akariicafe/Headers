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

- (id)exportedInterface;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;

@end
