@class SUImageCache, NSArray, SUVariableCellConfigurationCache, ISURLOperationPool;

@interface SUTableDataSource : NSObject {
    SUVariableCellConfigurationCache *_configurationCache;
    long long _preferringUserInteractionCount;
}

@property (nonatomic) id cellReuseSource;
@property (readonly, nonatomic) SUImageCache *imageCache;
@property (readonly, nonatomic) ISURLOperationPool *imagePool;
@property (readonly, nonatomic) long long tableViewStyle;
@property (readonly, nonatomic) long long numberOfSections;
@property (nonatomic) long long columnCount;
@property (readonly, nonatomic) NSArray *sectionIndexTitles;
@property (readonly, nonatomic, getter=isPreferringUserInteraction) BOOL preferringUserInteraction;

- (void)reloadData;
- (id)init;
- (id)headerViewForSection:(long long)a0;
- (void)dealloc;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)titleForHeaderInSection:(long long)a0;
- (double)heightForFooterInSection:(long long)a0;
- (void)resetCaches;
- (long long)numberOfColumnsInSection:(long long)a0;
- (id)cellForIndexPath:(id)a0;
- (BOOL)deleteIndexPath:(id)a0;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (void)resetLayoutCaches;
- (void)endPreferringUserInteraction;
- (void)beginPreferringUserInteraction;
- (id)placeholderCellForIndexPath:(id)a0;
- (long long)sectionIndexForIndexTitle:(id)a0 atIndex:(long long)a1;
- (void)configurePlaceholderCell:(id)a0 forIndexPath:(id)a1;
- (BOOL)canDoubleTapIndexPath:(id)a0;
- (BOOL)canDeleteIndexPath:(id)a0;
- (double)heightForPlaceholderCells;
- (double)cellHeightForIndexPath:(id)a0;
- (id)titleForDeleteConfirmationForIndexPath:(id)a0;
- (BOOL)canSelectIndexPath:(id)a0;
- (void)didBeginPreferringUserInteraction;
- (void)didEndPreferringUserInteraction;
- (void)reloadCellContexts;
- (id)cachedConfigurationForClass:(Class)a0 index:(long long)a1;
- (id)cellContextForConfigurationClass:(Class)a0;

@end
