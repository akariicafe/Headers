@class NSObject, NSString, HMDDataStreamBulkSendProtocol, NSError, NSMutableArray, NSNumber;
@protocol OS_dispatch_queue;

@interface HMDDataStreamBulkSendSession : NSObject <HMFLogging, HMDDataStreamBulkSendSession> {
    BOOL _isClosed;
    BOOL _hasReceivedEof;
}

@property (copy, nonatomic) id /* block */ activeReadHandler;
@property (retain, nonatomic) NSMutableArray *pendingReads;
@property (retain, nonatomic) NSError *pendingError;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, weak, nonatomic) HMDDataStreamBulkSendProtocol *bulkSendProtocol;
@property (readonly, nonatomic) NSNumber *sessionIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isActive) BOOL active;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)read:(id /* block */)a0;
- (void)dealloc;
- (void)cancelWithReason:(unsigned short)a0;
- (void)asyncHandleRemoteCloseWithError:(id)a0;
- (id)initWithProtocol:(id)a0 sessionIdentifier:(id)a1 queue:(id)a2 logIdentifier:(id)a3;
- (void)asyncHandleIncomingPackets:(id)a0 isEof:(BOOL)a1;
- (void)_closeSession;
- (void)_pumpReadDataIfPossible;

@end
