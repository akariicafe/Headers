@class NSString, PUIReportSensorManager;

@interface PUIReportSensorEventsController : PSListController

@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) PUIReportSensorManager *manager;

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (id)valueForSpecifier:(id)a0;
- (void)dataDidChange;
- (id)headerForCategory:(id)a0;

@end
