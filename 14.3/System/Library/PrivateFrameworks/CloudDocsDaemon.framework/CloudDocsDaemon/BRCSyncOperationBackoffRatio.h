@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding> {
    long long _totalSyncOperations;
    long long _failedSyncOperations;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)clear;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (float)backoffRatio;
- (void)newSyncOperationWithError:(id)a0;

@end
