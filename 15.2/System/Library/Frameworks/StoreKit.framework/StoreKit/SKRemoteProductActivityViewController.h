@class NSString, SKStoreProductActivityViewController;

@interface SKRemoteProductActivityViewController : _UIRemoteViewController <SKUIClientProductActivityViewController>

@property (weak, nonatomic) SKStoreProductActivityViewController *productActivityViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void).cxx_destruct;
- (void)didFinishWithResult:(id)a0 error:(id)a1;

@end
