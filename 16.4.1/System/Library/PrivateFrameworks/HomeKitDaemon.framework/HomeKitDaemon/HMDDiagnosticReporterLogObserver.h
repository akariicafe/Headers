@class NSString, SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue, HMMLogEventDispatching;

@interface HMDDiagnosticReporterLogObserver : HMFObject <HMMLogEventObserver, HMFLogging>

@property (readonly, weak, nonatomic) id<HMMLogEventDispatching> logEventDispatcher;
@property (readonly) unsigned long long memoryExceptionThreshold;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) SDRDiagnosticReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)domainForEvent:(id)a0;
+ (BOOL)isSupportedEvent:(id)a0;
+ (id)subTypeForEvent:(id)a0;
+ (id)supportedEventClasses;
+ (id)typeForEvent:(id)a0;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (id)initWithLogEventDispatcher:(id)a0;
- (BOOL)shouldSubmitEvent:(id)a0;

@end
