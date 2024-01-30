@class NSString, SBAlertItem;

@interface SBClientAlertItemTestRecipe : NSObject <SBTestRecipe> {
    SBAlertItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void).cxx_destruct;
- (id)title;
- (id)_mapsApp;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_nextAlertItemToTest;
- (void)_dismissCurrentItem;
- (id)_anySUDescriptor;
- (id)_chatCarrierSMSAlert;
- (id)_chatMMSDelayedDownloadAlert;
- (id)_chatMMSInformationMissingAlert;
- (id)_mapsThermalAlert;
- (id)_wifiBTSSPAlert;
- (id)_wifiDontAskAlert;
- (id)_wifiErrorAlert;
- (id)_wifiIsEnterpriseAlert;
- (id)_wifiPasswordAlert;
- (id)_wifiTrustAlert;
- (void)educationAlertWasDeactivated:(id)a0;
- (id)_currentAssistantLanguage;

@end
