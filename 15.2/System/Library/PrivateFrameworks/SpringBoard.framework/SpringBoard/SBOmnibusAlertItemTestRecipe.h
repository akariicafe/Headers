@class NSString, SBAlertItem;

@interface SBOmnibusAlertItemTestRecipe : NSObject <SBTestRecipe> {
    SBAlertItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (id)title;
- (void).cxx_destruct;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_nextAlertItemToTest;
- (void)_dismissCurrentItem;
- (id)_mapsApp;
- (id)_anyAppIcon;
- (id)_anyUserInstalledAppIcon;
- (id)_anySUDescriptor;

@end
