@class NSString;

@interface CVNLPPerformanceResult : NSObject {
    double maxpeak;
    double peakdelta;
    double recentpeak;
    double current;
    double cpuTime;
    double cpuInstructions;
    double timeInterval;
}

@property (readonly, nonatomic) NSString *name;

- (id)initWithName:(id)a0;
- (id)dict;
- (id)description;
- (void).cxx_destruct;

@end
