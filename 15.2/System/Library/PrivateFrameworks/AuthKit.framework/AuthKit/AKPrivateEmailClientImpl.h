@class NSString;
@protocol AKPrivateEmailUIProvider;

@interface AKPrivateEmailClientImpl : NSObject <AKPrivateEmailClientProtocol>

@property (retain, nonatomic) id<AKPrivateEmailUIProvider> uiProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentPrivateEmailUIForContext:(id)a0 completion:(id /* block */)a1;

@end
