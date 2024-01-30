@class NSString;
@protocol HAP2AccessoryServerTransportCommon, HAP2AccessoryServerTransportDelegate;

@interface HAP2AccessoryServerTransportBaseWithDelegate : HAP2AccessoryServerTransportBase <HAP2AccessoryServerTransport>

@property (weak, nonatomic) id<HAP2AccessoryServerTransportDelegate> delegate;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) double maxRequestTimeout;
@property (readonly, nonatomic) id<HAP2AccessoryServerTransportCommon> underlyingTransport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)didChangeStateWithError:(id)a0;

@end
