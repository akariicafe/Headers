@class NSObject, SWWakingTimer, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BLTClientReplyTimeoutManager : NSObject {
    NSMutableArray *_clientReplyTimeouts;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) SWWakingTimer *timer;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_handleClientReplyTimeout;
- (void)_invalidateClientReplyTimer;
- (void)_sortTimeouts;
- (void)_startClientReplyTimerWithFireDate:(id)a0;
- (void)_startNextClientReplyTimer;
- (id)addClientReplyTimeoutForBulletin:(id)a0 sectionID:(id)a1 timeout:(double)a2 handler:(id /* block */)a3;
- (void)extendClientReplyTimeout:(id)a0 additionalTime:(unsigned long long)a1;
- (BOOL)invalidateClientReplyTimeout:(id)a0;

@end
