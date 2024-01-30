@class NSString, NSMutableDictionary;

@interface _CDPerfMetricFamily : NSObject

@property (readonly) NSMutableDictionary *perfMetrics;
@property (readonly) NSString *name;

+ (id)perfMetricFamilyWithName:(id)a0;

- (void).cxx_destruct;
- (id)perfMetricWithName:(id)a0 string:(id)a1;
- (id)description;
- (id)allPerfMetrics;
- (id)perfMetricWithName:(id)a0;
- (id)initWithName:(id)a0;

@end
