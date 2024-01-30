@class NSString, NSDictionary, NSArray, EspressoProfilingLayerSupportInfo;

@interface EspressoProfilingLayerInfo : NSObject

@property (retain) NSString *name;
@property (retain) NSString *debug_name;
@property int selected_runtime_engine;
@property (retain) EspressoProfilingLayerSupportInfo *main_engine_support;
@property (retain) NSDictionary *per_platform_support;
@property (retain) NSArray *runtimes;
@property double average_runtime;

- (void).cxx_destruct;

@end
