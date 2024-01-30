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

- (id)titleForHeaderInSection:(long long)a0;
- (void)reloadData;
- (long long)numberOfRowsInSection:(long long)a0;
- (void)dealloc;
- (id)init;
- (void)resetCaches;
- (id)headerViewForSection:(long long)a0;
- (double)heightForFooterInSection:(long long)a0;
- (long long)numberOfColumnsInSection:(long long)a0;
- (id)cellForIndexPath:(id)a0;
- (void)didEndPreferringUserInteraction;
- (void)beginPreferringUserInteraction;
- (id)cachedConfigurationForClass:(Class)a0 index:(long long)a1;
- (BOOL)canDeleteIndexPath:(id)a0;
- (BOOL)canDoubleTapIndexPath:(id)a0;
- (BOOL)canSelectIndexPath:(id)a0;
- (id)cellContextForConfigurationClass:(Class)a0;
- (double)cellHeightForIndexPath:(id)a0;
- (void)configureCell:(id)a0 forIndexPath:(id)a1;
- (void)configurePlaceholderCell:(id)a0 forIndexPath:(id)a1;
- (BOOL)deleteIndexPath:(id)a0;
- (void)didBeginPreferringUserInteraction;
- (void)endPreferringUserInteraction;
- (double)heightForPlaceholderCells;
- (id)placeholderCellForIndexPath:(id)a0;
- (void)reloadCellContexts;
- (void)resetLayoutCaches;
- (long long)sectionIndexForIndexTitle:(id)a0 atIndex:(long long)a1;
- (id)titleForDeleteConfirmationForIndexPath:(id)a0;

@end
