@class NSArray, NSMutableDictionary, _MXExtensionManager, MUAMSResultProvider;

@interface MUPlaceExtensionDiscoveryManager : NSObject {
    NSArray *_extensionDataItems;
    NSMutableDictionary *_vendorIdsByAppIds;
    NSMutableDictionary *_extensionsByAppIds;
    NSArray *_extensionDiscoveryResults;
    _MXExtensionManager *_extensionManager;
    MUAMSResultProvider *_amsResultProvider;
}

@property (readonly, nonatomic, getter=isPerformingDiscovery) BOOL performingDiscovery;
@property (readonly, nonatomic) BOOL canShowExtensionReservation;
@property (readonly, nonatomic, getter=isReservationProviderAppInstalled) BOOL reservationProviderAppInstalled;

- (void).cxx_destruct;
- (void)_loadAppLockupExtensionGroupsUsingAppIdentifiers:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)_performExtensionDiscoveryUsingExtensionGroups:(id)a0 usingAppIdentifiers:(id)a1 completion:(id /* block */)a2;
- (id)discoveryResultForDataItem:(id)a0;
- (id)initWithExtensionDataItems:(id)a0 amsResultProvider:(id)a1;
- (void)performExtensionDiscoveryWithOptions:(id)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;

@end
