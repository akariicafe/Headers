@class NSString;

@interface SORemoteExtensionViewController : _UIRemoteViewController <SOHostExtensionViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;


@end
