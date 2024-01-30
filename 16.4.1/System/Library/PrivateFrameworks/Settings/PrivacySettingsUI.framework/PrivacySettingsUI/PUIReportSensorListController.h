@class PUIReportSensorManager;

@interface PUIReportSensorListController : PSListController

@property (retain, nonatomic) PUIReportSensorManager *manager;
@property (nonatomic) BOOL alphabeticalSort;

+ (id)valueForSpecifier:(id)a0;
+ (id)appSpecifiersFromManager:(id)a0;

- (BOOL)shouldReloadSpecifiersOnResume;
- (void)dealloc;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)sortByWasTapped;
- (void)dataDidChange;

@end
