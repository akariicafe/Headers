@class WBSCloudTabStore;

@interface CloudTabsForYouDataSource : WBSForYouCloudTabsDataSource {
    WBSCloudTabStore *_cloudTabStore;
}

- (void)dealloc;
- (void)_cloudTabsDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)initWithTabStore:(id)a0;

@end
