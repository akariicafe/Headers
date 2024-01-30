@class NSString;

@interface PSUICellularDataPlanSetupGroup : NSObject <PSSpecifierGroup>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)specifiers;
- (void)setupAccountPressed:(id)a0;

@end
