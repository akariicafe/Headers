@class PUIReportSensorManager;

@interface PUIReportSensorListController : PSListController

@property (retain, nonatomic) PUIReportSensorManager *manager;
@property (nonatomic) BOOL alphabeticalSort;

+ (id)valueForSpecifier:(id)a0;
+ (id)appSpecifiersFromManager:(id)a0;

- (id)specifiers;
- (BOOL)shouldReloadSpecifiersOnResume;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)dataDidChange;
- (void)sortByWasTapped;

@end
