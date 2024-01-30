@class NSSet, WiFiLexicon, NSObject;
@protocol WiFiScanProvider, OS_dispatch_queue, WiFiLocationProvider;

@interface WiFiAvailabilityEngine : NSObject

@property (copy, nonatomic) NSSet *providers;
@property (copy, nonatomic) NSSet *sources;
@property (weak, nonatomic) id<WiFiScanProvider> scanProvider;
@property (weak, nonatomic) id<WiFiLocationProvider> locationProvider;
@property (retain, nonatomic) NSSet *availableNetworks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) WiFiLexicon *wifiLexicon;
@property (nonatomic) double availabilityMatchMaximumAge;
@property (copy, nonatomic) id /* block */ availabilityChangedCallback;

- (void)_handleWalletRelevancyAdded:(id)a0 removed:(id)a1;
- (void)_handleScanResultCallback:(id)a0 error:(id)a1;
- (id)initWithProviders:(id)a0 sources:(id)a1;
- (id)findRecommendationForScannedNetwork:(id)a0;
- (id)_findRelevantNetworkMatchForScannedNetwork:(id)a0;
- (id)findRecommendationsForScannedNetwork:(id)a0;
- (void)_handleCandidateMatches:(id)a0;
- (void)_removeStaleMatches;
- (void)_handle3BarsRelevancyAdded:(id)a0 removed:(id)a1;
- (void)_findAvailabilityMatchesInSourcesForBSSIDS:(id)a0;
- (void).cxx_destruct;
- (id)_findExistingAvailabilityMatchForScannedNetwork:(id)a0;
- (id)_createAvailabilityMatchForCandidate:(id)a0 scannedNetwork:(id)a1;
- (void)_setupProviderCallbacks:(id)a0;
- (void)_setupSourceCallbacks:(id)a0;

@end
