@class NSArray, NSMutableSet, BBBulletin;

@interface BBObserverGatewayEnumerator : NSObject

@property (retain, nonatomic) NSMutableSet *gatewaysPlayedLightsAndSirens;
@property (nonatomic) BOOL cancelled;
@property (copy, nonatomic) NSArray *gateways;
@property (retain, nonatomic) BBBulletin *bulletin;
@property (nonatomic) unsigned long long feeds;
@property (nonatomic) double gatewayTimeout;

- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)enumerateWithCompletion:(id /* block */)a0;
- (void)attemptNextGatewayInEnumerator:(id)a0 playLightsAndSirens:(BOOL)a1 completion:(id /* block */)a2;
- (void)sendToDefaultGatewayToPlayLightsAndSirens:(BOOL)a0;
- (id)defaultGateway;

@end
