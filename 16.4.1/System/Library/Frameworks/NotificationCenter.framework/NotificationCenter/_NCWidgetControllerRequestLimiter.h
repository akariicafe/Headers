@class NSDate;

@interface _NCWidgetControllerRequestLimiter : NSObject {
    NSDate *_lastRequestDate;
    BOOL _isThrottled;
    long long _requestCount;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)isRequestPermitted;

@end
