@class CNContactStore, CNContactViewController;
@protocol EKEditItemViewControllerDelegate, EKIdentityProtocol;

@interface EKIdentityViewController : UIViewController <EKEditItemViewControllerProtocol> {
    id<EKIdentityProtocol> _identity;
    CNContactViewController *_personViewController;
    CNContactStore *_store;
}

@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (id)initWithIdentity:(id)a0;
- (void)setIdentity:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (Class)_CNContactStoreClass;
- (Class)_CNContactClass;
- (Class)_CNContactViewControllerClass;
- (id)contactForIdentity:(id)a0;
- (void)updateControllerWithContact:(id)a0 isNew:(BOOL)a1;
- (id)CNContactPhoneNumbersKey;
- (id)CNContactEmailAddressesKey;
- (Class)_CNMutableContactClass;
- (Class)_CNLabeledValueClass;
- (id)CNLabelWork;

@end
