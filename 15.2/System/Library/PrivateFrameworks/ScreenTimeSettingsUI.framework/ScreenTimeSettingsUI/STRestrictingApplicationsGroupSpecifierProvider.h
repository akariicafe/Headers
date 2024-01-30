@class NSArray;

@interface STRestrictingApplicationsGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (readonly, copy) NSArray *authorizationRecords;

- (void)setFamilyControlsEnabled:(id)a0 forSpecifier:(id)a1;
- (id)isFamilyControlsEnabled:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)getAuthorizationStatusForRecordIdentifier:(id)a0 fromRecords:(id)a1;

@end
