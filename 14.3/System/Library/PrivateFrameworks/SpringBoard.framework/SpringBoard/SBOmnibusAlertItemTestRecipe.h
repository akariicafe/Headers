@class NSString, SBAlertItem;

@interface SBOmnibusAlertItemTestRecipe : NSObject <SBTestRecipe> {
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
- (id)_anyAppIcon;
- (id)_anyUserInstalledAppIcon;
- (id)_anySUDescriptor;

@end
