@class NSString, SDRDiagnosticReporter, NSObject;
@protocol OS_dispatch_queue;

@interface HMDDiagnosticReporterLogObserver : HMFObject <HMMLogEventObserver, HMFLogging>

@property (class, readonly) HMDDiagnosticReporterLogObserver *sharedObserver;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) SDRDiagnosticReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)supportedEventClasses;
+ (id)subTypeForEvent:(id)a0;
+ (id)typeForEvent:(id)a0;
+ (id)domainForEvent:(id)a0;
+ (BOOL)isSupportedEvent:(id)a0;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (BOOL)shouldSubmitEvent:(id)a0;

@end
