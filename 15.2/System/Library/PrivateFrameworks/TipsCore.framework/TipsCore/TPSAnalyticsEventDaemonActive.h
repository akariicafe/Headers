@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {
    BOOL _alreadyRunning;
}

@property (retain, nonatomic) NSString *reason;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithReason:(id)a0 alreadyRunning:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)_initWithReason:(id)a0 alreadyRunning:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;

@end
