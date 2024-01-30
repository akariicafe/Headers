@class CATOperationQueue;
@protocol CATSharingBroadcastPrimitives, CATSharingBroadcastTerminalDelegate;

@interface CATSharingBroadcastTerminal : NSObject {
    id<CATSharingBroadcastPrimitives> mBroadcastPrimitive;
    id<CATSharingBroadcastTerminalDelegate> mDelegate;
    CATOperationQueue *mDelegationQueue;
    BOOL mInvalidated;
    BOOL mIsDisplayingPIN;
}

@property (nonatomic, getter=isBroadcasting) BOOL broadcasting;
@property (readonly, nonatomic) CATOperationQueue *delegationQueue;

- (void)_activate;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidateWithError:(id)a0 removePrimitiveHandlers:(BOOL)a1 deactivatePrimitives:(BOOL)a2;
- (void)addPrimitiveHandlers;
- (id)initWithBroadcastPrimitives:(id)a0 delegate:(id)a1 delegationQueue:(id)a2;
- (void)removePrimitiveHandlers;
- (void)sessionHasPaired;
- (void)sessionNeedsToDisplayPin:(id)a0;

@end
