@class NSString, SFStartPageCollectionViewController, _SFSectionModel;

@interface SFStartPageBookmarkFolderDataSource : NSObject <SFStartPageCollectionDataSource, _SFStartPageDataSourceObserving> {
    SFStartPageCollectionViewController *_collectionViewController;
    _SFSectionModel *_folder;
    id /* block */ _reloadHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_reloadFolder;
- (void)reloadDataAnimatingDifferences:(BOOL)a0;
- (id)sectionsForStartPageCollectionViewController:(id)a0;
- (void)startPageCollectionViewController:(id)a0 toggleSectionExpanded:(id)a1;
- (BOOL)startPageCollectionViewController:(id)a0 isSectionExpanded:(id)a1;
- (id)titleForStartPageCollectionViewController:(id)a0;
- (id)initWithReloadHandler:(id /* block */)a0;
- (void)connectToViewController:(id)a0;

@end
