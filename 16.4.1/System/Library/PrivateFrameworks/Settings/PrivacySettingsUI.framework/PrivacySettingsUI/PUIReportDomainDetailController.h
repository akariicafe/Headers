@class NSString, NSArray, PSSpecifier;

@interface PUIReportDomainDetailController : PSListController

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) PSSpecifier *appHeader;
@property (retain, nonatomic) NSArray *appRows;
@property (retain, nonatomic) NSArray *appRowsAwaitingDisplay;
@property (retain, nonatomic) PSSpecifier *websiteHeader;
@property (retain, nonatomic) NSArray *websiteRows;
@property (retain, nonatomic) NSArray *websiteRowsAwaitingDisplay;

- (id)specifiers;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)valueForSpecifier:(id)a0;
- (void)didTapLearnMore;
- (id)iconForContext:(id)a0;
- (id)appSpecifiersFromResults:(id)a0;
- (void)dataDidChange;
- (id)nameForAppID:(id)a0;
- (void)reloadAsyncSpecifiers;
- (id)timeStringForDate:(id)a0;
- (id)websiteSpecifiersFromResults:(id)a0;

@end
