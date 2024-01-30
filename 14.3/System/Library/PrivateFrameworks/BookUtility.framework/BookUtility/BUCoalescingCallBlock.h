@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface BUCoalescingCallBlock : NSObject

@property (copy, nonatomic) id /* block */ notifyBlock;
@property (copy, nonatomic) id /* block */ notifyTimeoutBlock;
@property (nonatomic) unsigned short notifyTimeoutDurationSeconds;
@property (nonatomic) unsigned long long nextCoalescingTime;
@property (nonatomic) unsigned long long nextMaxTime;
@property (nonatomic) BOOL pending;
@property (nonatomic, getter=isInvoking) BOOL invoking;
@property (copy, nonatomic) NSString *notifyBlockDescription;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sync;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (nonatomic) double coalescingDelay;
@property (nonatomic) double maximumDelay;

- (void)_invokeIfNotInProgress;
- (id)initWithNotifyBlock:(id /* block */)a0 notifyTimeout:(unsigned short)a1 blockDescription:(id)a2 notifyTimeoutBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_maxTimeExpired:(unsigned long long)a0;
- (void)_coalescingTimeExpired:(unsigned long long)a0;
- (id)initWithNotifyBlock:(id /* block */)a0 blockDescription:(id)a1;
- (void)signalWithCompletion:(id /* block */)a0;
- (id)description;
- (void)_invoke;

@end
