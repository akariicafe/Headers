@class NSURLSessionTaskMetrics, NSURLSessionDataTask, NPTMetricResult;

@interface NPTTaskMetrics : NSObject

@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (retain, nonatomic) NPTMetricResult *results;
@property (retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics;

- (void).cxx_destruct;
- (id)init;

@end
