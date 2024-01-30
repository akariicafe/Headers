@class NSString, NSDictionary, NSBundle, NSArray;

@interface PUILocationServicesAuthorizationLevelController : PUILocationServicesListController {
    unsigned long long _authMask;
    BOOL _correctiveCompensationState;
}

@property (copy, nonatomic) NSString *serviceKey;
@property (retain, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSBundle *entityBundle;
@property (retain, nonatomic) NSArray *correctiveCompensationSpecifiersGroup;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)profileSettingsChanged:(id)a0;
- (void)_updatePreciseLocationCell;
- (void)_synchronizeLocationDetails;
- (id)_constructFooterForAuthorizationLevel:(unsigned long long)a0;
- (void)_setPreciseLocationEnabled:(id)a0 specifier:(id)a1;
- (id)_preciseLocationStatus:(id)a0;
- (void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(unsigned long long)a0 withCorrectiveCompensation:(int)a1;
- (id)_purposeStringForAuthorizationLevel:(unsigned long long)a0;
- (void)_setLocationAuthorizationLevelForSpecifier:(id)a0;
- (id)_usageTextForAuthorizationLevel:(unsigned long long)a0;

@end
