@class NSString, NSObject;
@protocol OS_os_log;

@interface AEConcretePerformancePrimitivesInFlightInterval : NSObject <AEPerformancePrimitivesInFlightInterval> {
    BOOL _isEnded;
    NSString *_name;
    unsigned long long _signpostID;
    NSObject<OS_os_log> *_log;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)endInterval;

@end
