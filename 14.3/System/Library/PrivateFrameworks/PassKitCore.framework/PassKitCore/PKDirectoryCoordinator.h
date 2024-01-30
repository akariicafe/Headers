@class NSString, NSURL;

@interface PKDirectoryCoordinator : NSObject <PKInvalidateObservable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _Atomic BOOL _invalidated;
    NSURL *_url;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)performCoordinatedAction:(id /* block */)a0;
- (void)invalidate;

@end
