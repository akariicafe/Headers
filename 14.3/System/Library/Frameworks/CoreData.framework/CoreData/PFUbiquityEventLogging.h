@class NSMutableSet;

@interface PFUbiquityEventLogging : NSObject {
    NSMutableSet *_logEvents;
}

@property long long logLevel;

+ (void)initialize;
+ (id)sharedEventLogger;

- (id)init;
- (void)dealloc;
- (void)endEvent:(id)a0;
- (void)logEvent:(id)a0 ID:(id)a1 message:(id)a2;
- (id)createEventTrackingID:(int)a0;
- (id)createCustomEventTrackingID:(id)a0;
- (void)beginEvent:(id)a0;
- (void)debug:(id)a0 message:(id)a1;
- (void)logEventData:(id)a0 message:(id)a1;
- (void)diagnostic:(id)a0 message:(id)a1;
- (void)info:(id)a0 message:(id)a1;
- (void)warning:(id)a0 message:(id)a1;
- (void)error:(id)a0 message:(id)a1;
- (void)fatal:(id)a0 message:(id)a1;
- (id)incompleteEvents;

@end
