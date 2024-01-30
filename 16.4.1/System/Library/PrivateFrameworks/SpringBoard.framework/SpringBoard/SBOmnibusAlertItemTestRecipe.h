@class NSString, SBAlertItem;

@interface SBOmnibusAlertItemTestRecipe : NSObject <SBTestRecipe> {
    SBAlertItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)title;
- (void).cxx_destruct;
- (id)_anyAppIcon;
- (id)_anySUDescriptor;
- (id)_anyUserInstalledAppIcon;
- (void)_dismissCurrentItem;
- (id)_mapsApp;
- (id)_nextAlertItemToTest;

@end
