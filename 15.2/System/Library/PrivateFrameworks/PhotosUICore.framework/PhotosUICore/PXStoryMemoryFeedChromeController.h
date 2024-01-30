@class UINavigationItem, PXStoryMemoryFeedDataSourceManager, NSString;

@interface PXStoryMemoryFeedChromeController : NSObject <PXChangeObserver, PXSectionedDataSourceManagerObserver, PXStoryFeedChromeController>

@property (readonly, nonatomic) UINavigationItem *navigationItem;
@property (readonly, nonatomic) PXStoryMemoryFeedDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isActive;

- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_updateChrome;
- (id)initWithViewController:(id)a0 dataSourceManager:(id)a1;
- (void)_handleFavoritesToggleButton:(id)a0;
- (void)_invalidateChrome;

@end
