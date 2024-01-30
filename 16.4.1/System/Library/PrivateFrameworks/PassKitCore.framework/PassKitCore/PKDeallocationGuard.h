@class NSString;

@interface PKDeallocationGuard : NSObject <PKInvalidatable> {
    _Atomic BOOL _invalidated;
    id /* block */ _block;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
