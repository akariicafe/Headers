@class PKMerchant, NSString, PKPassAuxiliaryPassInformationItem, NSIndexPath;
@protocol PKDashboardDataSourceDelegate;

@interface PKAuxiliaryPassInformationDataSource : NSObject <PKDashboardDataSource> {
    BOOL _contentIsLoaded;
    id<PKDashboardDataSourceDelegate> _delegate;
}

@property (readonly, nonatomic) PKPassAuxiliaryPassInformationItem *item;
@property (readonly, nonatomic) PKMerchant *merchant;
@property (readonly, nonatomic) NSString *footerTitle;
@property (readonly, nonatomic) NSString *footerText;
@property (readonly, nonatomic) NSString *footerSecondaryTitle;
@property (readonly, nonatomic) NSString *footerSecondaryText;
@property (readonly, nonatomic) NSIndexPath *headerIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)itemAtIndexPath:(id)a0;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (id)navigationBarTitle;
- (unsigned long long)numberOfSections;
- (void).cxx_destruct;
- (id)titleForSection:(unsigned long long)a0;
- (void)_notifyContentLoadedIfNecessary;
- (id)_headerItem;
- (BOOL)_isDynamicSection:(long long)a0;
- (void)_loadMerchantForPassUniqueID:(id)a0;
- (id)footerTextItemForSection:(unsigned long long)a0;
- (id)initWithItem:(id)a0 forPass:(id)a1;
- (void)setDataSourceDelegate:(id)a0;

@end
