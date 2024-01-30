@class NSString, NSTimer, NSDate, NSObject;
@protocol OS_os_activity;

@interface HFUpdateLogger : NSObject

@property (retain, nonatomic) NSObject<OS_os_activity> *loggerActivity;
@property (retain, nonatomic) NSString *clientDescription;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) double softTimeoutInterval;
@property (retain, nonatomic) NSTimer *softTimeoutTimer;
@property (nonatomic) BOOL didReachSoftTimeout;

+ (id)history;
+ (id)runningLoggers;

- (void)finish;
- (id)description;
- (void).cxx_destruct;
- (void)_handleTimeout:(id)a0;
- (id)initWithTimeout:(double)a0 description:(id)a1;

@end
