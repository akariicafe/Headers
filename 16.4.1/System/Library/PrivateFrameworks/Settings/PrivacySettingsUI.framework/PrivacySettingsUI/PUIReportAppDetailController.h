@class NSString, NSArray, PSSpecifier;

@interface PUIReportAppDetailController : PSListController

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) PSSpecifier *domainHeader;
@property (retain, nonatomic) NSArray *domainRows;
@property (retain, nonatomic) NSArray *domainRowsAwaitingDisplay;
@property (retain, nonatomic) PSSpecifier *websiteHeader;
@property (retain, nonatomic) NSArray *websiteRows;
@property (retain, nonatomic) NSArray *websiteRowsAwaitingDisplay;
@property (retain, nonatomic) PSSpecifier *otherHeader;
@property (retain, nonatomic) NSArray *otherRows;
@property (retain, nonatomic) NSArray *otherRowsAwaitingDisplay;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)specifiers;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)valueForSpecifier:(id)a0;
- (void)dataDidChange;
- (id)domainsSpecifiersFromResults:(id)a0;
- (id)otherSpecifiersFromResults:(id)a0;
- (void)reloadAsyncSpecifiers;
- (BOOL)shouldShowOtherContent;
- (id)websiteSpecifiersFromResults:(id)a0;

@end
