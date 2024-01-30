@interface WhiteTabsTestRunner : ReplayPagesTestRunner {
    unsigned long long _runCount;
    unsigned long long _totalHibernatedTabs;
    unsigned long long _totalLiveTabs;
}

- (id)init;
- (void)finishedTestPage:(id)a0;
- (void)collectPPTResults;

@end
