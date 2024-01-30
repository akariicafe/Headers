@class NSString, HDProfile, HDAssertionManager, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HDWorkoutEventCollectorDelegate;

@interface HDWorkoutEventsManager : NSObject <HDAssertionObserver> {
    HDProfile *_profile;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_eventCollectors;
    id<HDWorkoutEventCollectorDelegate> _eventsDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)initWithProfile:(id)a0;
- (void)unitTest_setCMWorkoutManager:(id)a0;
- (void).cxx_destruct;
- (void)fakeActivityDetection:(id)a0 workoutActivity:(id)a1;
- (void)requestPendingEventsThroughDate:(id)a0 sessionIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)takeSessionAssertionWithOwnerIdentifier:(id)a0 activityType:(unsigned long long)a1 sessionIdentifier:(id)a2 eventsDelegate:(id)a3;
- (void)updateEventCollectorsForActivityType:(unsigned long long)a0 activityIdentifier:(id)a1;

@end
