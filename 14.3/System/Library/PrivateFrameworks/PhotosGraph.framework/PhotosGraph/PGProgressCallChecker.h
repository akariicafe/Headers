@class NSString, NSObject;
@protocol OS_os_log;

@interface PGProgressCallChecker : NSObject {
    double _timestampOfLastCallToProgress;
    double _timestampOfLastRecordedCallToProgress;
    unsigned long long _numberOfCallsToProgressSinceLastRecordedCall;
    NSObject<OS_os_log> *_loggingConnection;
    BOOL _wasStopped;
}

@property (copy, nonatomic) NSString *taskName;

- (void).cxx_destruct;
- (id)initWithTaskName:(id)a0 loggingConnection:(id)a1;
- (id)initWithTaskName:(id)a0;
- (void)checkCallsWithProgress:(double)a0 stop:(BOOL)a1;

@end
