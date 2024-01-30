@class NSObject, PCPersistentTimer, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BLTClientReplyTimeoutManager : NSObject {
    PCPersistentTimer *_clientReplyTimeoutTimer;
    NSMutableArray *_clientReplyTimeouts;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateClientReplyTimer;
- (void)_startClientReplyTimerWithFireDate:(id)a0;
- (void)_handleClientReplyTimeout;
- (void)_startNextClientReplyTimer;
- (void)_sortTimeouts;
- (BOOL)invalidateClientReplyTimeout:(id)a0;
- (void)extendClientReplyTimeout:(id)a0 additionalTime:(unsigned long long)a1;
- (id)addClientReplyTimeoutForBulletin:(id)a0 sectionID:(id)a1 timeout:(double)a2 handler:(id /* block */)a3;

@end
