@class BRMangledID;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double nextTry;
@property (readonly, nonatomic) BOOL isSyncDown;
@property (readonly, nonatomic) int lastErrorKind;
@property (retain, nonatomic) BRMangledID *mangledID;

- (void)clear;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)scheduleIfPossibleWithCurrentTimestamp:(long long)a0 signalSourceIfFailed:(id)a1 description:(id)a2;
- (BOOL)updateForClearingOutOfQuota;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)updateForError:(id)a0;
- (void)updateAfterSchedulingTask;
- (id)initWithMangledID:(id)a0 isSyncDown:(BOOL)a1;

@end
