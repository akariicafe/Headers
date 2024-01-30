@class PKPaymentPreferenceContact, NSArray, PKContactFormatValidator;
@protocol PKPaymentPreferenceContactSectionControllerDelegate;

@interface PKPaymentPreferenceContactSectionController : PKPaymentPreferenceSectionController {
    PKContactFormatValidator *_contactFormatValidator;
}

@property (readonly, nonatomic) PKPaymentPreferenceContact *contactPreference;
@property (readonly, nonatomic) NSArray *contactItems;
@property (weak, nonatomic) id<PKPaymentPreferenceContactSectionControllerDelegate> contactDelegate;

- (void).cxx_destruct;
- (id)addPreferenceItems;
- (void)deleteItem:(id)a0 forRow:(unsigned long long)a1;
- (void)editItem:(id)a0 forRow:(unsigned long long)a1;
- (id)appendNewSubPreference;
- (id)newOptionItemForSubPreference:(id)a0 hasErrorHandler:(id /* block */)a1;
- (BOOL)editedTextFieldHasError:(id)a0;
- (BOOL)_saveUpdatedContact:(id)a0 contactKey:(id)a1 preference:(id)a2 atIndex:(long long)a3;
- (id)initWithContactPreference:(id)a0 contactFormatValidator:(id)a1 style:(long long)a2 preferencesChangedHandler:(id /* block */)a3;
- (void)saveContact:(id)a0 forItem:(id)a1 withContactKey:(id)a2 completion:(id /* block */)a3;

@end
