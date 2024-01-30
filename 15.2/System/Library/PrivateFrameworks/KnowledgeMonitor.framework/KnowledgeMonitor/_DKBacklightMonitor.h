@class BMBacklightStream;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMBacklightStream *_backlightStream;
}

+ (BOOL)shouldMergeUnchangedEvents;
+ (id)eventStream;
+ (id)_eventWithState:(id)a0;
+ (id)entitlements;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (void)setIsBacklit:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)obtainCurrentValue;
- (void)deactivate;
- (void)dealloc;
- (void)stop;

@end
