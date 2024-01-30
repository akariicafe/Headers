@class RTDefaultsManager, NSMutableDictionary;

@interface RTPointOfInterestMonitorDailyMetrics : NSObject

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) NSMutableDictionary *metrics;

- (id)initWithDefaultsManager:(id)a0;
- (void)submit;
- (id)init;
- (id)description;
- (void)create;
- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (void)reset;
- (void)increaseCountForKey:(id)a0;

@end
