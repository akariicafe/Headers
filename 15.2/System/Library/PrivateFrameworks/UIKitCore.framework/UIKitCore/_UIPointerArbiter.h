@class NSString;
@protocol _UIPointerArbitrating;

@interface _UIPointerArbiter : NSObject <_UIPointerArbitrating> {
    id<_UIPointerArbitrating> _core;
}

@property (readonly, nonatomic) long long pointerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedArbiter;

- (void)endScrollingWithRegion:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)beginScrollingWithRegion:(id)a0;
- (void)exitRegion:(id)a0 removeStyle:(BOOL)a1 completion:(id /* block */)a2;
- (void)applyStyle:(id)a0 forRegion:(id)a1 effectSourceHandler:(id /* block */)a2 completion:(id /* block */)a3;

@end
