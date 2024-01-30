@class NSError;

@interface AVResult : NSObject {
    struct OpaqueFigSimpleMutex { } *_ivarAccessLock;
    long long _status;
    NSError *_error;
}

@property (readonly, getter=isFailed) BOOL failed;

- (void)markAsCompleted;
- (id)init;
- (void)dealloc;
- (void)getStatus:(long long *)a0 error:(id *)a1;
- (void)markAsFailedWithError:(id)a0;

@end
