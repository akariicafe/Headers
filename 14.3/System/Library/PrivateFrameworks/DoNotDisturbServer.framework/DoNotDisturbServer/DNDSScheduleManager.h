@class DNDSScheduleSettings, DNDSModeAssertionManager;
@protocol DNDSScheduleManagerDataSource;

@interface DNDSScheduleManager : NSObject {
    DNDSModeAssertionManager *_modeAssertionManager;
    DNDSScheduleSettings *_currentScheduleSettings;
}

@property (weak, nonatomic) id<DNDSScheduleManagerDataSource> dataSource;

- (void)refresh;
- (void).cxx_destruct;
- (void)_refreshWithScheduleSettings:(id)a0 context:(id)a1;
- (id)initWithModeAssertionManager:(id)a0;

@end
