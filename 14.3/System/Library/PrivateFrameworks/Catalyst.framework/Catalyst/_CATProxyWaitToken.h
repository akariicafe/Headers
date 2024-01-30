@class NSObject;
@protocol OS_dispatch_group;

@interface _CATProxyWaitToken : NSObject {
    _Atomic BOOL mFinished;
    NSObject<OS_dispatch_group> *mGroup;
}

@property (readonly, nonatomic) BOOL isExclusive;
@property (readonly, nonatomic) id resourceProxy;

- (void)cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)initWithExclusive:(BOOL)a0 group:(id)a1;
- (void)notifyWithResourceProxy:(id)a0;

@end
