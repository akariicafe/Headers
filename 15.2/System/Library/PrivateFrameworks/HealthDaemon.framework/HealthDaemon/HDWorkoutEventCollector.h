@class NSUUID, HDProfile;
@protocol HDWorkoutEventCollectorDelegate;

@interface HDWorkoutEventCollector : NSObject

@property (readonly, weak) id<HDWorkoutEventCollectorDelegate> delegate;
@property (readonly) NSUUID *sessionId;
@property (readonly, weak) HDProfile *profile;

+ (BOOL)isAvailableInCurrentHardware;

- (void).cxx_destruct;
- (void)stop;
- (id)initWithProfile:(id)a0 delegate:(id)a1;
- (void)startWithSessionId:(id)a0;
- (void)requestPendingEventsThroughDate:(id)a0 completion:(id /* block */)a1;
- (BOOL)supportsWorkoutActivityType:(unsigned long long)a0;
- (void)unitTest_setCMWorkoutManager:(id)a0;

@end
