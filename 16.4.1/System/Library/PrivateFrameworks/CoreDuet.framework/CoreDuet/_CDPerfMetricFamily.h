@class NSString, NSMutableDictionary;

@interface _CDPerfMetricFamily : NSObject

@property (readonly) NSMutableDictionary *perfMetrics;
@property (readonly) NSString *name;

+ (id)perfMetricFamilyWithName:(id)a0;

- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)allPerfMetrics;
- (id)perfMetricWithName:(id)a0;
- (id)perfMetricWithName:(id)a0 string:(id)a1;

@end
