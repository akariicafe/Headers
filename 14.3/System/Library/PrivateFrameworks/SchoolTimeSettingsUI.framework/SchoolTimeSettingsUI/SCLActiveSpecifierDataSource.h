@class NSArray, PSSpecifier, NSBundle, SCLScheduleFormatter, NSString;

@interface SCLActiveSpecifierDataSource : SCLSpecifierDataSource

@property (retain, nonatomic) SCLScheduleFormatter *formatter;
@property (retain, nonatomic) NSArray *permanentSpecifiers;
@property (retain, nonatomic) PSSpecifier *scheduleSpecifier;
@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) NSString *table;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithListController:(id)a0 viewModel:(id)a1;
- (void)showEditorForSpecifier:(id)a0;
- (id)initWithListController:(id)a0 viewModel:(id)a1 options:(unsigned long long)a2;
- (id)valueForScheduleSpecifier:(id)a0;
- (void)removeFooterText;
- (id)scheduleSummaryForSpecifier:(id)a0;
- (id)isSchoolTimeActive:(id)a0;
- (void)setSchoolTimeActive:(id)a0 specifier:(id)a1;

@end
