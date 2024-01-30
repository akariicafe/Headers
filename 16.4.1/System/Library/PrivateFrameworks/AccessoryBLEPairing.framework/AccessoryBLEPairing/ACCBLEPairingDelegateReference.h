@class ACCBLEPairingProvider;
@protocol ACCBLEPairingProviderProtocol;

@interface ACCBLEPairingDelegateReference : NSObject

@property (weak, nonatomic) id<ACCBLEPairingProviderProtocol> delegate;
@property (weak, nonatomic) ACCBLEPairingProvider *provider;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 provider:(id)a1;

@end
