@class NSSet, NSCountedSet, NSMapTable;
@protocol REActivityTrackerDelegate;

@interface REActivityTracker : NSObject {
    struct { unsigned char implementsBeginActivity : 1; unsigned char implementsEndActivity : 1; unsigned char implementsBeginActivityForObject : 1; unsigned char implementsEndActivityForObject : 1; } delegateCallbacks;
    NSCountedSet *_activities;
    NSMapTable *_activitiesByObject;
}

@property (readonly, weak, nonatomic) id<REActivityTrackerDelegate> delegate;
@property (readonly, nonatomic) NSSet *outstandingActivities;

- (id)initWithDelegate:(id)a0;
- (id)outstandingActivitiesForObject:(id)a0;
- (void)withdrawObject:(id)a0;
- (void)beginActivity:(id)a0 forObject:(id)a1;
- (void).cxx_destruct;
- (void)endActivity:(id)a0 forObject:(id)a1;
- (BOOL)trackingObject:(id)a0;
- (void)trackObject:(id)a0;

@end
