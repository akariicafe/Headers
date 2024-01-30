@class NSArray, NSString, SBAlertItem;

@interface SBTestableAlertItemTestRecipe : NSObject <SBTestRecipe> {
    SBAlertItem *_item;
}

@property (retain, nonatomic) NSArray *recipesToTest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;
+ (id)testCases;
+ (id)testCasesGrouped;
+ (id)nameForCase:(long long)a0;

- (void).cxx_destruct;
- (id)title;
- (id)_mapsApp;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_nextAlertItemToTest;
- (void)_dismissCurrentItem;
- (id)alertForIndex:(long long)a0;
- (id)dataPlanAlertItemForCase:(long long)a0;
- (id)_anyAppIcon;
- (id)_anyUserInstalledAppIcon;
- (id)_anySUDescriptor;

@end
