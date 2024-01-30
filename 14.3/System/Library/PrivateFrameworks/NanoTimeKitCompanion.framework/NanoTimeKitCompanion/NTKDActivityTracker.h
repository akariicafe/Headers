@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKDActivityTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activityIdentifiers;
    NSObject<OS_dispatch_source> *_adjustCriteriaTimer;
    NSObject<OS_dispatch_source> *_removePostWakeActivityTimer;
    BOOL _xpcActivityRegistered;
}

+ (id)sharedInstance;

- (void)checkin;
- (id)init;
- (void).cxx_destruct;
- (void)endActivity:(id)a0;
- (void)_queue_beginActivity:(id)a0;
- (void)_queue_endActivity:(id)a0;
- (void)_queue_setOrUpdateActivityAndTimer;
- (void)beginActivity:(id)a0;

@end
