@class NSArray, UsageFeed, AnalyticsWorkspace;

@interface PUIReportAppListController : PSListController

@property (retain, nonatomic) NSArray *cachedSpecifiers;
@property (retain, nonatomic) UsageFeed *feed;
@property (retain, nonatomic) AnalyticsWorkspace *workspace;
@property (nonatomic) BOOL alphabeticalSort;

+ (BOOL)appSpecifiersWithLimit:(unsigned long long)a0 completion:(id /* block */)a1;

- (id)specifiers;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)dataDidChange;
- (void)sortByWasTapped;

@end
