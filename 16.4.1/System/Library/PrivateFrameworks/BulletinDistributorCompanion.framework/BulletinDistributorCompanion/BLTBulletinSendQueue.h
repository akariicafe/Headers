@class NSDate, SWWakingTimer, PBCodable, NSObject, BLTBulletinSendQueueAttachmentSender, NSMutableArray, NSNumber, BLTSendQueueSerializer;
@protocol OS_dispatch_queue;

@interface BLTBulletinSendQueue : BLTBulletinSendQueuePassthrough {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_queuedBlockHandlers;
    NSNumber *_timeout;
    NSDate *_lastItemDate;
    PBCodable *_firstRequest;
    unsigned short _firstRequestType;
    NSDate *_lastQueueSendDate;
    BLTBulletinSendQueueAttachmentSender *_attachmentSender;
    BLTSendQueueSerializer *_queueSerializer;
}

@property (retain, nonatomic) SWWakingTimer *timer;

- (id)init;
- (void).cxx_destruct;
- (void)sendNow;
- (void)_queue_performSend;
- (void)_queue_queuePending;
- (void)_queue_sendRequest:(id)a0 type:(unsigned short)a1 withTimeout:(id)a2 isTrafficRestricted:(BOOL)a3 didSend:(id /* block */)a4 didQueue:(id /* block */)a5;
- (void)_queue_startTimerWithFireDate:(id)a0;
- (BOOL)handleFileURL:(id)a0;
- (void)queuePending;
- (void)sendRequest:(id)a0 type:(unsigned short)a1 didSend:(id /* block */)a2 didQueue:(id /* block */)a3;
- (void)sendRequest:(id)a0 withTimeout:(id)a1 isTrafficRestricted:(BOOL)a2 didSend:(id /* block */)a3;

@end
