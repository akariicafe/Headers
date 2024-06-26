@class MFMailboxUid, NSString, NSThread, MFError, MFInvocationQueue, NSMutableSet;

@interface MFActivityMonitor : EFPriorityDesignator <EFCancelable> {
    NSThread *_runningThread;
    NSString *_taskName;
    NSString *_displayName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    MFInvocationQueue *_ourQueue;
    double _percentDone;
    unsigned short _key : 13;
    unsigned char _canCancel : 1;
    unsigned char _shouldCancel : 1;
    unsigned char _isActive : 1;
    unsigned char _changeCount : 8;
    id _delegate;
    id _target;
    MFError *_error;
    unsigned long long _expectedLength;
    unsigned long long _maxCount;
    unsigned long long _currentCount;
    double _currentItemPercentDone;
    unsigned char _supportsPerItemProgress : 1;
    double _lastTime;
    double _startTime;
    unsigned long long _gotNewMessagesState;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    NSMutableSet *_reasons;
    NSMutableSet *_associatedCancelables;
}

@property (retain) MFMailboxUid *mailbox;
@property (nonatomic) BOOL canBeCancelled;
@property (nonatomic) BOOL shouldCancel;
@property (nonatomic) BOOL isRemoteSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentMonitor;
+ (void)destroyMonitor;

- (void)cancel;
- (id)init;
- (void)setMaxCount:(unsigned long long)a0;
- (double)percentDone;
- (void)reset;
- (id)taskName;
- (void)resetConnectionStats;
- (void)postActivityStarting;
- (void)postActivityFinished:(id)a0;
- (id)userInfoForNotification;
- (void)postDidChangeWithUserInfo:(id)a0;
- (id)_ntsThrottledUserInfoDict;
- (id)primaryTarget;
- (void)setSupportsPerItemProgress:(BOOL)a0;
- (void)setStatusMessage:(id)a0 percentDone:(double)a1;
- (void)setStatusMessage:(id)a0 percentDone:(double)a1 withKey:(int)a2;
- (void)setPercentDone:(double)a0 withKey:(int)a1;
- (void)setDisplayName:(id)a0 maxCount:(unsigned long long)a1;
- (void)addActivityTarget:(id)a0;
- (BOOL)_lockedAddActivityTarget:(id)a0;
- (void)removeActivityTarget:(id)a0;
- (void)cancelMessage;
- (void)setPrimaryTarget:(id)a0;
- (void)_cancelAssociatedCancelables;
- (void)setStatusMessage:(id)a0 withKey:(int)a1;
- (void)finishedActivity:(id)a0;
- (void)notifyConnectionEstablished;
- (void)setCurrentCount:(unsigned long long)a0;
- (void)setPercentDoneOfCurrentItem:(double)a0;
- (BOOL)hasReason:(id)a0;
- (void)setGotNewMessagesState:(unsigned long long)a0;
- (unsigned long long)gotNewMessagesState;
- (void)setPercentDone:(double)a0;
- (void)setExpectedLength:(unsigned long long)a0;
- (unsigned long long)expectedLength;
- (void)setActivityTarget:(id)a0;
- (id)activityTarget;
- (void)addActivityTargets:(id)a0;
- (id)activityTargets;
- (void)removeCancelable:(id)a0;
- (int)acquireExclusiveAccessKey;
- (void)relinquishExclusiveAccessKey:(int)a0;
- (void)recordBytesRead:(unsigned long long)a0;
- (void)recordBytesWritten:(unsigned long long)a0;
- (unsigned long long)bytesRead;
- (void)dealloc;
- (id)error;
- (int)changeCount;
- (void)setDisplayName:(id)a0;
- (double)startTime;
- (id)statusMessage;
- (BOOL)isActive;
- (void)startActivity;
- (unsigned long long)bytesWritten;
- (void)addCancelable:(id)a0;
- (void)_didChange;
- (void)setDelegate:(id)a0;
- (void)setError:(id)a0;
- (void)addReason:(id)a0;
- (void)setTaskName:(id)a0;
- (id)reasons;
- (void)setStatusMessage:(id)a0;
- (void)setInvocationQueue:(id)a0;
- (id)displayName;

@end
