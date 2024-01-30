@class NSMutableDictionary;

@interface PGInterruptionAssistant : NSObject {
    NSMutableDictionary *_reasons;
    BOOL _ignoreFaceTimeCameraInterruptions;
    BOOL _allowsResumingAfterInterruptionEnds;
    BOOL _isInterrupted;
    BOOL _lastInterruptionStateSentToProxy;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

@property (readonly, getter=isInterrupted) BOOL interrupted;
@property (readonly) BOOL allowsResumingAfterInterruptionEnds;

- (id)init;
- (void).cxx_destruct;
- (long long)addReason:(long long)a0;
- (long long)_numberOfInterruptionsForReason:(long long)a0;
- (BOOL)_calculateIsInterrupted;
- (id)initWithExceptionPolicy:(long long)a0;
- (BOOL)shouldNotifyProxyOfInterruptionBegan;
- (void)noteDidNotifyProxyOfInterruptionBegan;
- (BOOL)shouldNotifyProxyOfInterruptionEnded;
- (void)noteDidNotifyProxyOfInterruptionEnded;
- (long long)removeReason:(long long)a0;
- (BOOL)isInterruptedForReason:(long long)a0;
- (void)notePictureInPictureSessionDidEnd;

@end
