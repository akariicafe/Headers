@class NSString, NSObject;
@protocol OS_xpc_object;

@interface _NSBackgroundActivityInternal : NSObject {
    NSString *_identifier;
    double _interval;
    double _tolerance;
    double _delay;
    id /* block */ _activity;
    id /* block */ _checkInHandler;
    BOOL _repeats;
    BOOL _preregistered;
    BOOL _appRefresh;
    NSObject<OS_xpc_object> *_additionalProperties;
    long long _qualityOfService;
    NSObject<OS_xpc_object> *_currentActivity;
}

- (id)init;
- (void)dealloc;

@end
