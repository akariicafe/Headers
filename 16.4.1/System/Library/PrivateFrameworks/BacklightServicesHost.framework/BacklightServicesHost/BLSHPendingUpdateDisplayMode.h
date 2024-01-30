@class NSString, BLSHPendingDirectRampDisplayMode;

@interface BLSHPendingUpdateDisplayMode : NSObject <BLSHPendingOperation>

@property (readonly, getter=isFullyCompleted) BOOL fullyCompleted;
@property (readonly) BOOL isTwoPhaseUpdate;
@property (readonly) BOOL isDirectRamp;
@property (readonly) long long targetDisplayMode;
@property (readonly, weak) BLSHPendingUpdateDisplayMode *first;
@property (readonly, weak) BLSHPendingUpdateDisplayMode *last;
@property (readonly, weak) BLSHPendingUpdateDisplayMode *updateOperation;
@property (readonly, weak) BLSHPendingDirectRampDisplayMode *rampOperation;
@property (readonly) long long type;
@property (getter=isStarted) BOOL started;
@property (getter=isCompleted) BOOL completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationForUpdateFromCurrentDisplayMode:(long long)a0 toTargetDisplayMode:(long long)a1;

- (id)initWithTargetDisplayMode:(long long)a0;

@end
