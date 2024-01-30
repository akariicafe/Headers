@interface BLSDesiredFidelityRequest : NSObject {
    id /* block */ _completion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_completed;
}

- (id)initWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)completeWithDesiredFidelity:(long long)a0;

@end
