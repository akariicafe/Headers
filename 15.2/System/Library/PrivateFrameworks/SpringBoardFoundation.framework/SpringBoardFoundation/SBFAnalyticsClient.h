@class NSString, SBFAnalyticsBackend;

@interface SBFAnalyticsClient : NSObject {
    SBFAnalyticsBackend *_backend;
}

@property (copy, nonatomic) NSString *significantTimeChangedNotificationName;

+ (id)sharedInstance;

- (void)_noteSignificantTimeChanged:(id)a0;
- (void)emitEvent:(unsigned long long)a0 withPayload:(id)a1;
- (void)emitEvent:(unsigned long long)a0;
- (id)initWithBackend:(id)a0;
- (void).cxx_destruct;
- (void)registerForQueryName:(unsigned long long)a0 handler:(id /* block */)a1;

@end
