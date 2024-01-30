@class NSString, NSDictionary, NSBundle, NSArray;

@interface PUILocationServicesAuthorizationLevelController : PUILocationServicesListController {
    unsigned long long _authMask;
    BOOL _correctiveCompensationState;
}

@property (copy, nonatomic) NSString *serviceKey;
@property (retain, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSBundle *authEntityBundle;
@property (retain, nonatomic) NSArray *correctiveCompensationSpecifiersGroup;

- (void)setSpecifier:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_constructFooterForAuthorizationLevel:(unsigned long long)a0;
- (id)_preciseLocationStatus:(id)a0;
- (id)_purposeStringForAuthorizationLevel:(unsigned long long)a0;
- (void)_setLocationAuthorizationLevelForSpecifier:(id)a0;
- (void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(unsigned long long)a0 withCorrectiveCompensation:(int)a1;
- (void)_setPreciseLocationEnabled:(id)a0 specifier:(id)a1;
- (void)_synchronizeLocationDetails;
- (void)_updatePreciseLocationCell;
- (id)_usageTextForAuthorizationLevel:(unsigned long long)a0;
- (void)profileSettingsChanged:(id)a0;

@end
