@class BRMangledID;

@interface BRCSyncOperationThrottle : NSObject <NSSecureCoding> {
    BOOL _isSyncDown;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double nextTry;
@property (readonly, nonatomic) int lastErrorKind;
@property (retain, nonatomic) BRMangledID *mangledID;

- (void)clear;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMangledID:(id)a0 isSyncDown:(BOOL)a1;
- (void)updateAfterSchedulingTask;
- (void)updateForError:(id)a0;
- (void)updateAfterSchedulingTaskWithMinimumDelay:(double)a0;
- (BOOL)updateForClearingOutOfQuota;

@end
