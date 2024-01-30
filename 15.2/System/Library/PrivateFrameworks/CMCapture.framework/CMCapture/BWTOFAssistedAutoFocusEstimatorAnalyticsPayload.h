@class NSString, NSDictionary;

@interface BWTOFAssistedAutoFocusEstimatorAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (retain, nonatomic) NSString *portType;
@property (retain, nonatomic) NSDictionary *estimatorResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventDictionary;
- (id)init;
- (id)eventName;
- (void)dealloc;
- (void)reset;

@end
