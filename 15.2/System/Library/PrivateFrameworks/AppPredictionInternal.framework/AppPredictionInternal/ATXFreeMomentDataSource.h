@class NSArray, NSCountedSet;

@interface ATXFreeMomentDataSource : NSObject {
    NSArray *_events;
    NSCountedSet *_appsLaunchedInLastNSeconds;
    NSArray *_motionStatesInLastNSeconds;
}

- (void).cxx_destruct;
- (id)init;
- (void)logCompletion:(id)a0;
- (id)initWithEvents:(id)a0;
- (id)numPhoneUnlockEventsInLastNSeconds:(double)a0;
- (id)fetchEventsForDay;
- (id)appsLaunchedInLastNSeconds:(double)a0;
- (id)initWithAppsLaunchedInLastNSeconds:(id)a0;
- (id)initWithMotionStatesInLastNSeconds:(id)a0;
- (id)motionStatesInLastNSeconds:(double)a0;

@end
