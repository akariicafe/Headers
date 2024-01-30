@class PSPhoneNumberSpecifier, NSArray, NSString, PSSpecifier, KeychainSyncCountryInfo, PSEditableTableCell, PSListController;
@protocol KeychainSyncPhoneSettingsFragmentDelegate;

@interface KeychainSyncPhoneSettingsFragment : NSObject {
    NSArray *_specifiers;
    PSPhoneNumberSpecifier *_phoneNumberSpecifier;
    PSSpecifier *_countrySpecifier;
    PSListController *_listController;
}

@property (readonly, nonatomic) NSArray *specifiers;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) KeychainSyncCountryInfo *countryInfo;
@property (readonly, nonatomic) PSEditableTableCell *phoneNumberCell;
@property (weak, nonatomic) id<KeychainSyncPhoneSettingsFragmentDelegate> delegate;
@property (retain, nonatomic) NSString *title;

- (void)reloadSpecifiers;
- (void)dealloc;
- (void)resignFirstResponder;
- (void).cxx_destruct;
- (void)textFieldChanged:(id)a0;
- (id)unformattedPhoneNumber;
- (id)dialingCountryInfoForSpecifier:(id)a0;
- (id)initWithListController:(id)a0;
- (id)phoneNumberForSpecifier:(id)a0;
- (void)setDialingCountryInfo:(id)a0 forSpecifier:(id)a1;
- (void)setPhoneNumber:(id)a0 forSpecifier:(id)a1;

@end
