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

+ (Class)_CNContactClass;
+ (id)contactForIdentity:(id)a0 keysToFetch:(id)a1;
+ (Class)_CNContactStoreClass;
+ (Class)_CNContactStoreConfigurationClass;
+ (id)_CNLabelWork;
+ (Class)_CNLabeledValueClass;
+ (Class)_CNMutableContactClass;
+ (id)_createContactForIdentity:(id)a0;
+ (id)_createContactStore;
+ (id)_fetchContactForIdentity:(id)a0 store:(id)a1 keysToFetch:(id)a2;

@end
