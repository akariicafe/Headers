@class NSUUID, NSString;
@protocol HMMLogEventSubmitting;

@interface HMDMediaDestinationManagerMetricsDispatcher : HMFObject <HMFLogging>

@property (readonly, copy) NSUUID *identifier;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
