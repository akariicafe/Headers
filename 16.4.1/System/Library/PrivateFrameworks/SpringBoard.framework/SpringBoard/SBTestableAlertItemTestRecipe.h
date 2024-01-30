@class NSArray, NSString, SBAlertItem;

@interface SBTestableAlertItemTestRecipe : NSObject <SBTestRecipe> {
    SBAlertItem *_item;
}

@property (retain, nonatomic) NSArray *recipesToTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)testCases;
+ (id)nameForCase:(long long)a0;
+ (id)testCasesGrouped;

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
- (id)alertForIndex:(long long)a0;
- (id)dataPlanAlertItemForCase:(long long)a0;

@end
