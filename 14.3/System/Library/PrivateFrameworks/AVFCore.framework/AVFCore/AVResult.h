@class NSError;

@interface AVResult : NSObject {
    struct OpaqueFigSimpleMutex { } *_ivarAccessLock;
    long long _status;
    NSError *_error;
}

@property (readonly, getter=isFailed) BOOL failed;

- (void)getStatus:(long long *)a0 error:(id *)a1;
- (id)init;
- (void)dealloc;
- (void)markAsFailedWithError:(id)a0;
- (void)markAsCompleted;

@end
