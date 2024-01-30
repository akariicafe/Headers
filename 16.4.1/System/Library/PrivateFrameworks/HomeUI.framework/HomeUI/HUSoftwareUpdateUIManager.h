@class NSString, NSMapTable;

@interface HUSoftwareUpdateUIManager : NSObject <HFSoftwareUpdateObserver, HFExecutionEnvironmentObserver>

@property (readonly, nonatomic) NSMapTable *homeBackgroundCheckMapTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_markTermsAndConditionsAsReadForLicenseAgreementVersion:(id)a0 inHome:(id)a1;
- (id)_fetchAvailableUpdatesForAccessories:(id)a0 options:(unsigned long long)a1;
- (BOOL)_shouldPresentTermsAndConditionsForSoftwareLicenseAgreementVersion:(id)a0 home:(id)a1;
- (void)executionEnvironmentDidEnterBackground:(id)a0;
- (id)fetchAvailableUpdatesForAccessories:(id)a0 options:(unsigned long long)a1;
- (id)fetchAvailableUpdatesForHome:(id)a0 options:(unsigned long long)a1;
- (BOOL)isLicensePresentationNecessaryForSoftwareUpdate:(id)a0 error:(out id *)a1;
- (long long)numberOfAccessoriesWithAvailableUpdates:(id)a0;
- (long long)numberOfAccessoriesWithAvailableUpdatesInHome:(id)a0;
- (id)presentLicensesIfNeededForSoftwareUpdate:(id)a0 presentationDelegate:(id)a1;
- (void)startSilentBackgroundCheckForHome:(id)a0;
- (id)startUpdateForAccessory:(id)a0 presentationDelegate:(id)a1;
- (id)startUpdatesForAccessories:(id)a0 presentationDelegate:(id)a1;
- (id)startUpdatesForAllAccessoriesInHome:(id)a0 presentationDelegate:(id)a1;

@end
