@class NSArray;

@interface VUIDebugViewDataSource : NSObject

@property (retain, nonatomic) NSArray *metricsDataSource;
@property (retain, nonatomic) NSArray *defaultsDataSource;

- (void).cxx_destruct;
- (id)init;
- (id)_createMetricsDataSource;
- (id)_createDefaultsDataSource;

@end
