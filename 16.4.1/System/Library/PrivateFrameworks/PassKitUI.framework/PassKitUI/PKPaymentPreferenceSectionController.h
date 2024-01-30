@class NSString, PKPaymentPreference, NSMutableArray, UICollectionViewCellRegistration;
@protocol PKPaymentPreferenceSectionControllerDelegate;

@interface PKPaymentPreferenceSectionController : PKDynamicListSectionController <PKTextFieldCollectionViewListCellDelegate> {
    unsigned long long _editingRow;
    UICollectionViewCellRegistration *_listRegistration;
    UICollectionViewCellRegistration *_textFieldRegistration;
    BOOL _isEditingFieldThatWasOriginallyInvalid;
}

@property (readonly, nonatomic) PKPaymentPreference *preference;
@property (weak, nonatomic) id<PKPaymentPreferenceSectionControllerDelegate> delegate;
@property (readonly, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSMutableArray *items;
@property (readonly, nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelectedIndex:(unsigned long long)a0;
- (id)sectionIdentifier;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (BOOL)_showErrorForTextField:(id)a0;
- (id)addPreferenceItems;
- (id)appendNewItemForEditing;
- (id)appendNewSubPreference;
- (id)cellRegistrationForItem:(id)a0;
- (void)deleteItem:(id)a0 forRow:(unsigned long long)a1;
- (void)editItem:(id)a0 forRow:(unsigned long long)a1;
- (BOOL)editedTextFieldHasError:(id)a0;
- (id)initWithPreference:(id)a0 style:(long long)a1 preferencesChangedHandler:(id /* block */)a2;
- (id)newOptionItemForSubPreference:(id)a0;
- (id)newOptionItemForSubPreference:(id)a0 hasErrorHandler:(id /* block */)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (void)textFieldDidBeginEditing:(id)a0 forListCell:(id)a1;
- (void)textFieldDidEndEditing:(id)a0 forListCell:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0 forListCell:(id)a1;

@end
