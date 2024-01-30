@class NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    double _standardSamplingRate;
}

+ (id)sharedInstance;

- (double)samplingRateForLogType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)submitWithProtobuf:(id)a0 logtype:(long long)a1;
- (id)samplingRateFromParsecBag;

@end
