@class NSArray, NSString, UICollectionViewCellRegistration;

@interface PKPaymentSetupDiscoverCardSectionController : NSObject <PKDynamicSectionController>

@property (readonly, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;

@end
