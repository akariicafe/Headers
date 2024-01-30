@class NSString;
@protocol SFAirDropViewServiceHostProtocol;

@interface _SFAirDropRemoteViewController : _UIRemoteViewController <SFAirDropViewServiceHostProtocol>

@property (weak, nonatomic) id<SFAirDropViewServiceHostProtocol> airDropHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)airDropExtensionService;
- (void)airDropViewServiceDidFinishTransferWithSuccess:(BOOL)a0;
- (void)airDropViewServiceDidRequestDismissal;
- (void)airDropViewServiceDidStartTransfer;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)airDropViewServiceWillStartTransferToRecipient:(id)a0;

@end
