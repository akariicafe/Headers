@class PKPaymentDigitalIssuanceMetadata, NSArray, UIImage, UICollectionViewCellRegistration;
@protocol PKPaymentSetupChooseProductListSectionControllerDelegate;

@interface PKPaymentSetupChooseProductListSectionController : PKDynamicListSectionController {
    NSArray *_items;
    PKPaymentDigitalIssuanceMetadata *_digitalIssuanceMetadata;
}

@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (weak, nonatomic) id<PKPaymentSetupChooseProductListSectionControllerDelegate> delegate;
@property (retain, nonatomic) UIImage *cardImage;

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)_generateItems;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)defaultListLayout;
- (id)initWithIdentifier:(id)a0 image:(id)a1 digitalIssuanceMetadata:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
