@class WFPrivateAddressConfigManager, NSArray, NSString, CWFInterface;

@interface WFKnownNetworksManager : NSObject <WFKnownNetworksProvider>

@property (retain, nonatomic) NSArray *allKnownProfiles;
@property (retain, nonatomic) CWFInterface *interface;
@property (retain, nonatomic) WFPrivateAddressConfigManager *privateAddressConfigManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInterface:(id)a0;
- (void).cxx_destruct;
- (BOOL)removeNetworks:(id)a0;
- (id)_getAllKnownProfiles;
- (id)allEditableNetworkProfiles;
- (id)allNonEditableNetworkProfiles;
- (id)passwordForNetworksWithSSID:(id)a0;
- (id)privateAddressConfigForNetworkName:(id)a0;

@end
