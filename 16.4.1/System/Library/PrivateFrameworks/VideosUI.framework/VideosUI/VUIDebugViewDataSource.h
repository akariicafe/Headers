@class NSArray;

@interface VUIDebugViewDataSource : NSObject

@property (retain, nonatomic) NSArray *metricsDataSource;
@property (retain, nonatomic) NSArray *defaultsDataSource;

- (id)init;
- (void).cxx_destruct;
- (id)_createDefaultsDataSource;
- (id)_createMetricsDataSource;

@end
