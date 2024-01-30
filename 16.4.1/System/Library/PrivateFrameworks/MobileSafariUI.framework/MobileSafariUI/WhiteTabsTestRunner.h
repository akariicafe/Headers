@interface WhiteTabsTestRunner : ReplayPagesTestRunner {
    unsigned long long _runCount;
    unsigned long long _totalHibernatedTabs;
    unsigned long long _totalLiveTabs;
}

- (id)init;
- (void)collectPPTResults;
- (void)finishedTestPage:(id)a0;

@end
