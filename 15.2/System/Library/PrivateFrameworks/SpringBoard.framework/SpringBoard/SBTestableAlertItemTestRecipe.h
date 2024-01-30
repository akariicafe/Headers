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
+ (void)load;
+ (id)testCasesGrouped;
+ (id)nameForCase:(long long)a0;

- (id)title;
- (void).cxx_destruct;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;
- (id)_nextAlertItemToTest;
- (void)_dismissCurrentItem;
- (id)alertForIndex:(long long)a0;
- (id)_mapsApp;
- (id)dataPlanAlertItemForCase:(long long)a0;
- (id)_anyAppIcon;
- (id)_anyUserInstalledAppIcon;
- (id)_anySUDescriptor;

@end
