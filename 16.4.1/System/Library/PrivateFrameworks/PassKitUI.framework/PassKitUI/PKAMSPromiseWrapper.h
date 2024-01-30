@class NSString, AMSPromise;

@interface PKAMSPromiseWrapper : NSObject <PKCancelable, PKInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
    BOOL _canceled;
    AMSPromise *_promise;
}

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (void)cancel;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithAMSPromise:(id)a0;

@end
