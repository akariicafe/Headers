@class NSArray, NSString;
@protocol PXSearchTapToRadarSectionProviderDelegate, PXSearchDataSourceSectionProviderChangeObserver;

@interface PXSearchTapToRadarSectionProvider : NSObject <PXSearchDataSourceSectionProvider>

@property (nonatomic) BOOL shouldDisplayRadarDescriptionLabel;
@property (weak, nonatomic) id<PXSearchTapToRadarSectionProviderDelegate> delegate;
@property (readonly, nonatomic) unsigned long long type;
@property (weak, nonatomic) id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver;
@property (readonly, copy, nonatomic) NSArray *sectionIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (id)layoutForSectionIdentifier:(id)a0 environment:(id)a1 collectionViewLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(id /* block */)a0;
- (id)supplementaryViewReuseIdentifierForKind:(id)a0 indexPath:(id)a1;
- (void)configureSupplementaryView:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (void)registerClassesForCellReuseIdentifiers:(id /* block */)a0;
- (id)cellReuseIdentifierForItemIdentifier:(id)a0;
- (void)configureCell:(id)a0 forItemIdentifier:(id)a1;

@end
