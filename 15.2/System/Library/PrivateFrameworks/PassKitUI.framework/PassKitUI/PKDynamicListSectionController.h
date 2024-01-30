@class NSArray, NSString, NSAttributedString, UICollectionViewCellRegistration;

@interface PKDynamicListSectionController : NSObject <PKDynamicSectionController>

@property (retain, nonatomic) NSArray *identifiers;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) NSAttributedString *attributedHeaderText;
@property (copy, nonatomic) NSAttributedString *attributedFooterText;
@property (copy, nonatomic) id /* block */ leadingSwipeActionsConfigurationProvider;
@property (copy, nonatomic) id /* block */ trailingSwipeActionsConfigurationProvider;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;

@end
