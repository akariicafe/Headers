@class NSString, AppleDepthLogger, ADTimeProfiler;

@interface ADExecutorParameters : NSObject

@property (copy, nonatomic) NSString *intermediatesOutputPath;
@property (retain, nonatomic) AppleDepthLogger *logger;
@property (nonatomic) BOOL powerMeasureMode;
@property (nonatomic) long long stepsToSkip;
@property (retain, nonatomic) ADTimeProfiler *timeProfiler;

- (void).cxx_destruct;
- (id)init;

@end
