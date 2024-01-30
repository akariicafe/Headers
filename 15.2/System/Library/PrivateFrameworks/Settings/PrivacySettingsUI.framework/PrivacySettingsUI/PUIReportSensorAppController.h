@class NSString, PUIReportSensorManager;

@interface PUIReportSensorAppController : PSListController

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) PUIReportSensorManager *manager;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (id)valueForSpecifier:(id)a0;
- (void)dataDidChange;

@end
