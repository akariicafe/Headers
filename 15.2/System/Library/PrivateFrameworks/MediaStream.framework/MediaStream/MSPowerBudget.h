@class NSString, MSPBTimerContext, NSObject;
@protocol OS_dispatch_queue, MSPowerBudgetDelegate;

@interface MSPowerBudget : NSObject

@property (nonatomic, setter=workQueueSetFileTransferAllowed:) BOOL workQueueIsFileTransferAllowed;
@property (nonatomic, setter=workQueueSetExternalPowered:) BOOL workQueueIsExternalPowered;
@property (nonatomic, setter=workQueueSetForeground:) BOOL workQueueIsForeground;
@property (retain, nonatomic) MSPBTimerContext *workQueuePushTimerContext;
@property (retain, nonatomic) MSPBTimerContext *workQueuePostForegroundTimerContext;
@property (retain, nonatomic) MSPBTimerContext *workQueueGlobalResetSyncTimerContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) id<MSPowerBudgetDelegate> delegate;
@property (nonatomic) double maxActiveTimeAfterPush;
@property (nonatomic) double maxActiveTimeAfterLossOfForeground;
@property (nonatomic) double maxActiveTimeAfterGlobalResetSync;
@property (retain, nonatomic) NSString *focusAlbumGUID;
@property (retain, nonatomic) NSString *focusAssetCollectionGUID;
@property (retain, nonatomic) NSString *personID;
@property (readonly, nonatomic, getter=isFileTransferAllowed) BOOL fileTransferAllowed;
@property (readonly, nonatomic, getter=hasForegroundFocus) BOOL foregroundFocus;
@property (readonly, nonatomic) BOOL hasActiveTimers;

- (void)shutDown;
- (void)workQueueCommitPersistedValues;
- (void)workQueueRecomputeFileTransferAllowed;
- (void)didEndExternalPower;
- (void)workQueueSetPushTimerDate:(id)a0;
- (void)didReceivePushNotification;
- (void)didBeginExternalPower;
- (void)workQueueSetPostForegroundTimerDate:(id)a0;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
- (void).cxx_destruct;
- (id)init;
- (void)_globalResetSyncTimerDidExpire:(id)a0;
- (double)workQueueMaxActiveTimeAfterPush;
- (void)_postForegroundTimerDidExpire:(id)a0;
- (void)workQueueSetIsFileTransferAllowed:(BOOL)a0;
- (void)didEndForegroundFocus;
- (void)didBeginForegroundFocus;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
- (void)didReceiveGlobalResetSync;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)a0;
- (void)setIsFileTransferAllowed:(BOOL)a0;

@end
