@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding> {
    long long _totalSyncOperations;
    long long _failedSyncOperations;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)clear;
- (void)encodeWithCoder:(id)a0;
- (float)backoffRatio;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)newSyncOperationWithError:(id)a0;

@end
