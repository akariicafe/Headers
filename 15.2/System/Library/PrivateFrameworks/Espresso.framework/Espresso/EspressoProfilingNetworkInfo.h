@class EspressoProfilingANEcompilerAnalytics, NSString, NSMutableArray, EspressoProfilingNetworkANEInfo;

@interface EspressoProfilingNetworkInfo : NSObject

@property (retain) NSMutableArray *layers;
@property (retain) NSString *network_at_path;
@property (retain) EspressoProfilingNetworkANEInfo *ane_performance_info;
@property (retain) EspressoProfilingANEcompilerAnalytics *ane_compiler_analytics;

- (void).cxx_destruct;

@end
