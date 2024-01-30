@class CATOperationQueue, CATSharingDevice, NSString, NSError;
@protocol CATSharingBroadcastPrimitives, CATTimerSource, CATTimer, CATSharingConnectionDelegate;

@interface CATSharingBroadcastConnection : NSObject <CATSharingConnection> {
    id<CATSharingBroadcastPrimitives> mBroadcastPrimitives;
    BOOL mIsClosing;
    id<CATTimerSource> mTimerSource;
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

- (void)close;
- (void)_close;
- (void)sendData:(id)a0 completion:(id /* block */)a1;
- (void)messageReceived:(id)a0;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 completion:(id /* block */)a1;
- (void)addBroadcastPrimitiveHandlers;
- (void)_sendData:(id)a0 completion:(id /* block */)a1;
- (void)closeWithError:(id)a0 reportToRemote:(BOOL)a1;
- (void)tombstoneWithError:(id)a0;
- (void)sendTearDownMessageWithError:(id)a0;
- (void)removeBroadcastPrimitiveHandlers;
- (void)handleUnparsableMessageDictionary:(id)a0;
- (void)handleCloseMessage:(id)a0;
- (void)handleSentMessage:(id)a0;
- (id)initWithBroadcastPrimitives:(id)a0 timerSource:(id)a1;

@end
