@class CTUIListLoadingGroup, PSSpecifier, NSString, NSArray, PSListController;

@interface PSUIAppDataUsageGroup : NSObject <PSAppCellularUsageSpecifierDelegate, PSSpecifierGroup> {
    NSArray *_specifiers;
}

@property (weak, nonatomic) PSListController *hostController;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (retain, nonatomic) CTUIListLoadingGroup *loadingGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void).cxx_destruct;
- (void)prefetchResourcesFor:(id)a0;
- (id)specifiers;
- (void)didFailToSetPolicy:(id)a0 forSpecifier:(id)a1;
- (void)presentAlert:(id)a0;
- (void)calculateUsage;

@end
