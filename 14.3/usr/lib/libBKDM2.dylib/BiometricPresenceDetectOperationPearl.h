@class NSTimer;

@interface BiometricPresenceDetectOperationPearl : BiometricPresenceDetectOperation

@property (nonatomic) BOOL continuous;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) BOOL highPriority;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL timeouted;
@property (nonatomic) BOOL finished;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned int)taskPausedMessage;
- (unsigned int)taskResumedMessage;
- (unsigned int)taskResumeFailedMessage;
- (unsigned int)cancelledMessage;

@end
