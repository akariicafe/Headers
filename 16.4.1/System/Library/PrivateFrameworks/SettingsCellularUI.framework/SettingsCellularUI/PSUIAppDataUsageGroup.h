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

- (id)getLogger;
- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void)prefetchResourcesFor:(id)a0;
- (void)didFailToSetPolicyForSpecifier:(id)a0;
- (void)calculateUsage;

@end
