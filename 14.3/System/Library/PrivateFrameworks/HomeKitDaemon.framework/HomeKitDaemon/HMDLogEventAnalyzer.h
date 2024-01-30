@class NSArray, NSString;
@protocol HMDLogEventAnalyzerContext;

@interface HMDLogEventAnalyzer : HMFObject <HMFLogging, HMDLogEventObserver>

@property (readonly) id<HMDLogEventAnalyzerContext> context;
@property (readonly) NSArray *supportedEventTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1;
- (void)processLogEvent:(id)a0;
- (BOOL)isSupportedEvent:(id)a0;
- (void)didReceiveEventFromDispatcher:(id)a0 withLogContext:(id)a1;

@end
