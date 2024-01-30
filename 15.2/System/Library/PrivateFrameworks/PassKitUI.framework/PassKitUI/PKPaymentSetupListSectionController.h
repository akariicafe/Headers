@class NSArray, NSString, UICollectionViewCellRegistration;

@interface PKPaymentSetupListSectionController : NSObject <PKDynamicSectionController>

@property (retain, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)decoratePaymentSetListCell:(id)a0 forItem:(id)a1;
- (id)defaultListLayout;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)footerAttributedStringForIdentifier:(id)a0;

@end
