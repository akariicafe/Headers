@class NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    double _standardSamplingRate;
}

+ (id)sharedInstance;

- (void)submitWithProtobuf:(id)a0 logtype:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (double)samplingRateForLogType:(long long)a0;
- (id)samplingRateFromParsecBag;

@end
