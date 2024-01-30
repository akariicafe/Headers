@interface SKUIMetricsUtilities : NSObject

@property (class, readonly) BOOL showEventNotifications;
@property (class, readonly) BOOL trackAllEvents;
@property (class, readonly) BOOL shouldLogTimingMetrics;

+ (double)timeIntervalFromJSTime:(id)a0;
+ (id)jsTimeFromTimeInterval:(double)a0;
+ (id)newErrorPageEvent;
+ (id)newErrorRetryClickEvent;

@end
