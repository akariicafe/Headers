@class NSArray;

@interface PUIReportDomainListController : PSListController

@property (retain, nonatomic) NSArray *cachedSpecifiers;
@property (nonatomic) BOOL alphabeticalSort;
@property (nonatomic) BOOL showWebsiteAndAppCounts;

+ (BOOL)domainSpecifiersWithLimit:(unsigned long long)a0 showDates:(BOOL)a1 showAppAndWebsiteCounts:(BOOL)a2 showIPAddresses:(BOOL)a3 completion:(id /* block */)a4;
+ (id)domainSpecifiersFromResults:(id)a0 showDates:(BOOL)a1 showAppAndWebsiteCounts:(BOOL)a2 app:(id)a3 appOther:(id)a4 website:(id)a5;

- (id)specifiers;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)dataDidChange;
- (void)sortByWasTapped;

@end
