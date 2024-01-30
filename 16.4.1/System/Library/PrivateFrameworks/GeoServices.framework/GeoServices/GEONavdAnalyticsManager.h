@protocol GEONavdAnalyticsReporter;

@interface GEONavdAnalyticsManager : NSObject

@property (retain, nonatomic) id<GEONavdAnalyticsReporter> analyticsReporter;

+ (id)sharedManager;

- (void).cxx_destruct;

@end
