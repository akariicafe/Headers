@class NSString, LAContext;

@interface PKAuthenticatorPreflightContext : NSObject <PKInvalidatable> {
    LAContext *_context;
    long long _validReferenceCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)context;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_clearIfPossibleUnsafe;
- (void)decrementValidReferenceCount;
- (void)incrementValidReferenceCount;

@end
