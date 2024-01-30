@class HDNanoSyncStore, NSUUID, _HKExpiringCompletionTimer, NSCalendar, NSDate, NSMutableArray;

@interface HDNanoSyncRestoreSession : NSObject

@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) _HKExpiringCompletionTimer *timer;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) HDNanoSyncStore *nanoSyncStore;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic) long long sequenceNumber;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_finishWithError:(id)a0;
- (void)addCompletionHandler:(id /* block */)a0;
- (id)initWithSyncStore:(id)a0 sessionUUID:(id)a1;
- (void)scheduleTimeoutWithInterval:(double)a0 handler:(id /* block */)a1;

@end
