@class MFMailboxUid, NSString, NSThread, MFError, NSMutableSet;

@interface MFActivityMonitor : EFPriorityDesignator <EFCancelable> {
    NSThread *_runningThread;
    NSString *_displayName;
    NSString *_statusMessage;
    double _percentDone;
    unsigned short _key : 13;
    unsigned char _canCancel : 1;
    unsigned char _shouldCancel : 1;
    unsigned char _isActive : 1;
    MFError *_error;
    unsigned long long _expectedLength;
    unsigned long long _maxCount;
    unsigned long long _currentCount;
    double _lastTime;
    double _startTime;
    unsigned long long _gotNewMessagesState;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    NSMutableSet *_reasons;
    NSMutableSet *_associatedCancelables;
}

@property (class, readonly) MFActivityMonitor *currentMonitor;

@property (retain) MFMailboxUid *mailbox;
@property (copy) id /* block */ startedFetch;
@property (nonatomic) unsigned long long gotNewMessagesState;
@property (readonly, nonatomic) double startTime;
@property (nonatomic) double percentDone;
@property (nonatomic) unsigned long long expectedLength;
@property (nonatomic) BOOL canBeCancelled;
@property (nonatomic) BOOL shouldCancel;
@property (nonatomic) BOOL isRemoteSearch;
@property (readonly, nonatomic) unsigned long long bytesRead;
@property (readonly, nonatomic) unsigned long long bytesWritten;
@property (readonly, nonatomic) long long transportType;
@property (retain, nonatomic) MFError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)destroyMonitor;
+ (id)pushNewMonitor;

- (void)addCancelable:(id)a0;
- (id)reasons;
- (void)_didChange;
- (void)cancel;
- (BOOL)isActive;
- (void)startActivity;
- (id)init;
- (void)setDisplayName:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)addReason:(id)a0;
- (void)_cancelAssociatedCancelables;
- (id)_ntsThrottledUserInfoDict;
- (int)acquireExclusiveAccessKey;
- (void)cancelMessage;
- (void)finishedActivity:(id)a0;
- (void)postActivityFinished:(id)a0;
- (void)postActivityStarting;
- (void)postDidChangeWithUserInfo:(id)a0;
- (void)recordBytesRead:(unsigned long long)a0;
- (void)recordBytesWritten:(unsigned long long)a0;
- (void)recordTransportType:(long long)a0;
- (void)relinquishExclusiveAccessKey:(int)a0;
- (void)removeCancelable:(id)a0;
- (void)resetConnectionStats;
- (void)setCurrentCount:(unsigned long long)a0;
- (void)setDisplayName:(id)a0 maxCount:(unsigned long long)a1;
- (void)setPercentDone:(double)a0 withKey:(int)a1;
- (void)setPercentDoneOfCurrentItem:(double)a0;
- (void)setStatusMessage:(id)a0 percentDone:(double)a1;
- (void)setStatusMessage:(id)a0 percentDone:(double)a1 withKey:(int)a2;
- (void)setStatusMessage:(id)a0 withKey:(int)a1;
- (id)userInfoForNotification;

@end
