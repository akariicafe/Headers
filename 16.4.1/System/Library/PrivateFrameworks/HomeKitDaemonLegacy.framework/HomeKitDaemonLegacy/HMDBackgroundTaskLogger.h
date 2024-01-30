@class NSString;
@protocol HMMLogEventSubmitting;

@interface HMDBackgroundTaskLogger : HMFObject <HMFLogging>

@property (readonly, nonatomic) id<HMMLogEventSubmitting> submitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLogEventSubmitter:(id)a0;
- (void)submitLogEventForTask:(id)a0;
- (void)submitNotFiredLogEventForTask:(id)a0;

@end
