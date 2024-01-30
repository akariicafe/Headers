@class PKPassGroupView, NSString, NSOrderedSet, PKGroup;
@protocol PKDashboardDataSourceDelegate;

@interface PKDashboardBarcodePassDataSource : NSObject <PKSecureElementObserver, PKDashboardPassDataSource> {
    PKPassGroupView *_groupView;
    PKGroup *_group;
    id<PKDashboardDataSourceDelegate> _delegate;
    NSOrderedSet *_messages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PKPassGroupView *groupView;

- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (unsigned long long)numberOfSections;
- (void)reloadData;
- (void)dealloc;
- (void).cxx_destruct;
- (id)titleForSection:(unsigned long long)a0;
- (void)_reloadMessages;
- (id)_messageForIssuerBinding;
- (id)footerTextItemForSection:(unsigned long long)a0;
- (void)groupViewDidChangeFrontmostPassView:(id)a0 withContext:(id)a1;
- (void)groupViewDidUpdatePassView:(id)a0;
- (id)initWithGroupView:(id)a0 context:(id)a1;
- (void)reloadMessages;
- (void)sendContentIsLoadedIfNecessary;
- (void)setDataSourceDelegate:(id)a0;

@end
