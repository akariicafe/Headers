@class NSString, NSArray, PSSpecifier;

@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate> {
    PSSpecifier *_countryFieldSpecifier;
    NSArray *_phoneNumberSpecifiers;
    PSSpecifier *_phoneNumberGroupSpecifier;
    PSSpecifier *_phoneNumberFieldSpecifier;
    BOOL _isLoading;
    BOOL _isError;
    id _regionListChangeObserver;
}

@property (copy, nonatomic) NSString *currentRegionID;
@property (copy, nonatomic) NSString *currentPhoneValue;
@property (retain, nonatomic) NSArray *regionData;
@property (copy) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)bundle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateUI;
- (void)dismiss;
- (id)_currentRegion;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)titleString;
- (id)logName;
- (void)_handleTimeout;
- (void)viewDidAppear:(BOOL)a0;
- (id)controllerForSpecifier:(id)a0;
- (id)validationString;
- (id)initWithRegController:(id)a0;
- (id)specifierList;
- (void)_setFieldsEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupEventHandlers;
- (void)_buildSpecifierCache:(id)a0;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_updateControllerState;
- (void)_startTimeout;
- (void)_loadRegionsIfNecessary;
- (void)showCountryPicker;
- (void)_startListeningForRegionListChanges;
- (id)_unformattedPhoneNumber:(id)a0;
- (void)_loadInitialValues;
- (id)_phoneTextField;
- (void)_stopListeningForRegionListChanges;
- (void)_handleRegionListLoad;
- (void)_refreshCountryFieldAnimated:(BOOL)a0;
- (void)_refreshPhoneFieldAnimated:(BOOL)a0;
- (void)_showPhoneField:(BOOL)a0 animated:(BOOL)a1;
- (id)currentPhoneCompatibleCountryCode;
- (void)_finishValidation;
- (void)_failValidationWithError:(id)a0;
- (void)hideCountryPicker;
- (void)_showCountryPickerAnimated:(BOOL)a0;
- (void)_hideCountryPickerAnimated:(BOOL)a0;
- (void)_buildCountryFieldSpecifierCache:(id)a0;
- (void)_buildPhoneNumberSpecifierCache:(id)a0;
- (void)regionChooser:(id)a0 selectedRegionID:(id)a1;
- (id)countryList;
- (id)currentCountryValueForSpecifier:(id)a0;
- (id)currentPhoneNumberForSpecifier:(id)a0;
- (void)setCurrentPhoneNumber:(id)a0 forSpecifier:(id)a1;

@end
