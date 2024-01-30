@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding> {
    long long _totalSyncOperations;
    long long _failedSyncOperations;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void)clear;
- (float)backoffRatio;
- (void)newSyncOperationWithError:(id)a0;

@end
