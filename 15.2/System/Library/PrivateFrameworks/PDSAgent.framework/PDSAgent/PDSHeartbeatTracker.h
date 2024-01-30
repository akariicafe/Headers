@class IMTimer, PDSBag, NSObject, NSDate;
@protocol OS_dispatch_queue, PDSHeartbeatTrackerDelegate;

@interface PDSHeartbeatTracker : NSObject

@property (retain, nonatomic) IMTimer *heartbeatTimer;
@property (retain, nonatomic) PDSBag *serverBag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ kvStoreBlock;
@property (weak, nonatomic) id<PDSHeartbeatTrackerDelegate> delegate;
@property (nonatomic) BOOL scheduledActivity;
@property (readonly, nonatomic) NSDate *trackedHeartbeatDate;
@property (readonly, nonatomic) BOOL isPassedTrackedHeartbeatDate;

- (void)_markNextCheckpointTimeWithTTL:(double)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1 kvStoreBlock:(id /* block */)a2 serverBag:(id)a3;
- (void)noteShouldNotTrackHeartbeat;
- (void)noteShouldTrackHeartbeat;
- (void)noteUpdatedHeartbeatTTL:(double)a0;
- (void).cxx_destruct;
- (void)_handleHeartbeatFired;
- (void)_setupMaintenanceActivity;

@end
