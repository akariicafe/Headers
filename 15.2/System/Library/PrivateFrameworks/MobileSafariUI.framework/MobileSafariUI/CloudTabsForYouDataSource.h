@class WBSCloudTabStore;

@interface CloudTabsForYouDataSource : WBSForYouCloudTabsDataSource {
    WBSCloudTabStore *_cloudTabStore;
}

- (void)_cloudTabsDidUpdate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTabStore:(id)a0;

@end
