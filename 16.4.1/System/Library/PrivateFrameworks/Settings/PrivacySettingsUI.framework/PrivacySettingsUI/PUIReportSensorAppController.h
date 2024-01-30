@class NSString, PUIReportSensorManager;

@interface PUIReportSensorAppController : PSListController

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) PUIReportSensorManager *manager;

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (id)valueForSpecifier:(id)a0;
- (void)dataDidChange;

@end
