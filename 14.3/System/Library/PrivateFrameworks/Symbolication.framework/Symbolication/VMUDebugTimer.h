@class NSString, NSDate;

@interface VMUDebugTimer : NSObject {
    NSDate *_programStartTime;
    NSDate *_eventStartTime;
    NSString *_eventMessage;
}

+ (id)sharedTimer;
+ (id)sharedTimerIfCreated;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)_endEvent;
- (void)startWithMessage:(id)a0;

@end
