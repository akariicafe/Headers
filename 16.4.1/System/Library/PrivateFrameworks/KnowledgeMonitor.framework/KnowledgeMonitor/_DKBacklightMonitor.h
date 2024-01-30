@class BMBacklightStream;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMBacklightStream *_backlightStream;
}

+ (id)eventStream;
+ (BOOL)shouldMergeUnchangedEvents;
+ (id)_eventWithState:(id)a0;
+ (id)entitlements;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (void)setIsBacklit:(BOOL)a0;

- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)obtainCurrentValue;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
