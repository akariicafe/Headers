@class NSString, ADTimeProfiler;

@interface ADExecutorParameters : NSObject

@property (copy, nonatomic) NSString *intermediatesOutputPath;
@property (nonatomic) BOOL powerMeasureMode;
@property (nonatomic) long long stepsToSkip;
@property (retain, nonatomic) ADTimeProfiler *timeProfiler;

- (id)init;
- (void).cxx_destruct;

@end
