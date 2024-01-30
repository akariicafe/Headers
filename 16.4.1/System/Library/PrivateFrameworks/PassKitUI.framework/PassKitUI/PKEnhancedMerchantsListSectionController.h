@class NSUUID, NSString, NSArray, CLLocationManager, PKAccountEnhancedMerchantsFetcher, _PKPendingEnhancedMerchantNearbyLocationSearch, CLLocation, UICollectionViewCellRegistration;
@protocol PKRewardsHubSectionControllerDelegate;

@interface PKEnhancedMerchantsListSectionController : NSObject <PKEnhancedMerchantCellDelegate, CLLocationManagerDelegate, PKDynamicSectionController, PKViewControllerPreflightable> {
    PKAccountEnhancedMerchantsFetcher *_fetcher;
    id<PKRewardsHubSectionControllerDelegate> _delegate;
    NSUUID *_merchantsUpdateToken;
    CLLocationManager *_locationManager;
    CLLocation *_lastValidLocation;
    _PKPendingEnhancedMerchantNearbyLocationSearch *_pendingMerchantLocationSearch;
}

@property (retain, nonatomic) NSArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;

- (void)_applicationDidEnterBackground:(id)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)dealloc;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_disclosuresCellRegistration;
- (id)_genericDisplayableErrorForError:(id)a0;
- (id)_merchantListCellRegistration;
- (void)_openMapsForMerchantSearch:(id)a0;
- (void)_performNearbyLocationsSearch:(id)a0 deviceLocation:(id)a1;
- (void)_presentError:(id)a0;
- (void)_reportEventIfNecessaryForButtonTapWithTag:(id)a0 merchant:(id)a1;
- (void)_requestLocationUpdateIfPossible;
- (void)_stopUpdatingLocation;
- (void)_updateCellBasedOnCurrentSearch:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)initWithSectionIdentifiers:(id)a0 fetcher:(id)a1 delegate:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)merchantForPrivateIdentifier:(id)a0;
- (void)performAction:(long long)a0 forEnhancedMerchant:(id)a1 sender:(id)a2;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
