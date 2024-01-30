@class CATOperationQueue, CATSharingDevice, NSString, NSError;
@protocol CATSharingDeviceSession, CATTimerSource, CATTimer, CATSharingConnectionDelegate;

@interface CATSharingDeviceSessionConnection : NSObject <CATSharingConnection> {
    id<CATSharingDeviceSession> mDeviceSession;
    id<CATTimerSource> mTimerSource;
    BOOL mIsClosing;
    id<CATTimer> mTombstoneTimer;
    CATOperationQueue *mOutgoingQueue;
    CATOperationQueue *mCatalystQueue;
}

@property (nonatomic, getter=isClosed) BOOL closed;
@property (retain, nonatomic) NSError *closedError;
@property (readonly, nonatomic) CATSharingDevice *remoteDevice;
@property (weak, nonatomic) id<CATSharingConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveMessage:(id)a0;
- (void)close;
- (void)_close;
- (void)sendData:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;
- (void)_sendData:(id)a0 completion:(id /* block */)a1;
- (void)closeWithError:(id)a0 reportToRemote:(BOOL)a1;
- (void)tombstoneWithError:(id)a0;
- (void)sendTearDownMessageWithError:(id)a0;
- (void)handleUnparsableMessageDictionary:(id)a0;
- (void)handleCloseMessage:(id)a0;
- (void)handleSentMessage:(id)a0;
- (void)addDeviceSessionHandlers;
- (void)removeDeviceSessionHandlers;
- (id)initWithDeviceSession:(id)a0 timerSource:(id)a1;

@end
