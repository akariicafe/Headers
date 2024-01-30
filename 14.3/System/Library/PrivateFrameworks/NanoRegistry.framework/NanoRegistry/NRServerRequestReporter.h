@class NSString;

@interface NRServerRequestReporter : NSObject {
    BOOL _submitted;
    NSString *_requestType;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
    double _startTime;
}

- (void).cxx_destruct;
- (void)dealloc;
- (double)abs_to_seconds:(unsigned long long)a0;
- (unsigned long long)abs_to_nanos:(unsigned long long)a0;
- (void)requestCompletedWithErrorCode:(unsigned int)a0 andDuration:(double)a1;
- (void)requestCompletedWithErrorCode:(unsigned int)a0;
- (void)requestTimedOut;
- (id)initWithRequestType:(id)a0;

@end
