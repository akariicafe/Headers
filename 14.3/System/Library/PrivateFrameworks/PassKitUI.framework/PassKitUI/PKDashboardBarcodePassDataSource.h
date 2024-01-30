@class NSString, PKPassGroupView, PKGroup;
@protocol PKDashboardDataSourceDelegate;

@interface PKDashboardBarcodePassDataSource : NSObject <PKSecureElementObserver, PKDashboardPassDataSource> {
    PKPassGroupView *_groupView;
    PKGroup *_group;
    id<PKDashboardDataSourceDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (id)initWithGroupView:(id)a0 context:(id)a1;
- (void)dealloc;
- (id)titleForSection:(unsigned long long)a0;
- (id)itemAtIndexPath:(id)a0;
- (void)sendContentIsLoadedIfNecessary;
- (id)footerTextItemForSection:(unsigned long long)a0;
- (void)setDataSourceDelegate:(id)a0;
- (void)groupViewDidUpdatePassView:(id)a0;
- (void)groupViewDidChangeFrontmostPassView:(id)a0 withContext:(id)a1;

@end
