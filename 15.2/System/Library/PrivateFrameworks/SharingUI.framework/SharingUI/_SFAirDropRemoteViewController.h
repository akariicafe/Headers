@class NSString;
@protocol SFAirDropViewServiceHostProtocol;

@interface _SFAirDropRemoteViewController : _UIRemoteViewController <SFAirDropViewServiceHostProtocol>

@property (weak, nonatomic) id<SFAirDropViewServiceHostProtocol> airDropHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;

- (void).cxx_destruct;
- (void)airDropViewServiceDidStartTransfer;
- (void)airDropViewServiceDidFinishTransferWithSuccess:(BOOL)a0;
- (void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)airDropViewServiceDidRequestDismissal;
- (id)airDropExtensionService;

@end
