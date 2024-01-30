@interface HMFLogEventReporter : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

+ (id)sharedReporter;

- (id)initWithSystemInfo:(id)a0;
- (id)startSessionForServiceName:(id)a0 signpostId:(unsigned long long)a1 finalizeBlock:(id /* block */)a2;
- (id)adoptVoucher:(id)a0 signpostId:(unsigned long long)a1 finalizeBlock:(id /* block */)a2;
- (void)submitSingleEventWithName:(id)a0 payload:(id)a1;

@end
