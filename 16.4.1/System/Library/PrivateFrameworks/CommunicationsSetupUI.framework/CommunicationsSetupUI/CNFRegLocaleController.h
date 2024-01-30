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

- (void)dismiss;
- (id)bundle;
- (void)_handleTimeout;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_currentRegion;
- (void)_updateUI;
- (id)titleString;
- (id)logName;
- (id)controllerForSpecifier:(id)a0;
- (id)validationString;
- (id)countryList;
- (id)_phoneTextField;
- (id)currentPhoneNumberForSpecifier:(id)a0;
- (void)regionChooser:(id)a0 selectedRegionID:(id)a1;
- (void)_buildCountryFieldSpecifierCache:(id)a0;
- (void)_buildPhoneNumberSpecifierCache:(id)a0;
- (void)_buildSpecifierCache:(id)a0;
- (void)_failValidationWithError:(id)a0;
- (void)_finishValidation;
- (void)_handleRegionListLoad;
- (void)_hideCountryPickerAnimated:(BOOL)a0;
- (void)_loadInitialValues;
- (void)_loadRegionsIfNecessary;
- (void)_refreshCountryFieldAnimated:(BOOL)a0;
- (void)_refreshPhoneFieldAnimated:(BOOL)a0;
- (id)_rightButtonItem;
- (void)_rightButtonTapped;
- (void)_setFieldsEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupEventHandlers;
- (void)_showCountryPickerAnimated:(BOOL)a0;
- (void)_showPhoneField:(BOOL)a0 animated:(BOOL)a1;
- (void)_startListeningForRegionListChanges;
- (void)_startTimeout;
- (void)_stopListeningForRegionListChanges;
- (id)_unformattedPhoneNumber:(id)a0;
- (void)_updateControllerState;
- (id)currentCountryValueForSpecifier:(id)a0;
- (id)currentPhoneCompatibleCountryCode;
- (void)hideCountryPicker;
- (id)initWithRegController:(id)a0;
- (void)setCurrentPhoneNumber:(id)a0 forSpecifier:(id)a1;
- (void)showCountryPicker;
- (id)specifierList;

@end
