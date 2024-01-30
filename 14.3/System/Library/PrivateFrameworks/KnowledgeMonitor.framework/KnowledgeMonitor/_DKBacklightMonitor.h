@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
}

+ (id)entitlements;
+ (void)setIsBacklit:(BOOL)a0;
+ (id)eventStream;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;
+ (id)_eventWithState:(id)a0;
+ (BOOL)shouldMergeUnchangedEvents;

- (void)synchronouslyReflectCurrentValue;
- (void)dealloc;
- (void)stop;
- (void)obtainCurrentValue;
- (void)start;
- (void)deactivate;

@end
