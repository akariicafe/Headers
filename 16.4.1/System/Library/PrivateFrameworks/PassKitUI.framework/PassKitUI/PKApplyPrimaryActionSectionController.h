@interface PKApplyPrimaryActionSectionController : PKApplyCollectionViewSectionController

@property (nonatomic) BOOL primaryButtonLoading;

- (id)identifiers;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)_configureContentSection:(id)a0;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
