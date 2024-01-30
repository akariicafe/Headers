@class NSArray, NSString, UIImage, PKDigitalIssuanceServiceProviderProduct, UICollectionViewCellRegistration;
@protocol PKPaymentServiceProviderItemsListSectionControllerDelegate;

@interface PKPaymentServiceProviderItemsListSectionController : PKDynamicListSectionController {
    NSArray *_items;
    PKDigitalIssuanceServiceProviderProduct *_product;
    NSString *_currency;
}

@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (weak, nonatomic) id<PKPaymentServiceProviderItemsListSectionControllerDelegate> delegate;
@property (retain, nonatomic) UIImage *cardImage;

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)defaultListLayout;
- (id)initWithIdentifier:(id)a0 image:(id)a1 serviceProviderProduct:(id)a2 serviceProviderItems:(id)a3 currency:(id)a4;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
