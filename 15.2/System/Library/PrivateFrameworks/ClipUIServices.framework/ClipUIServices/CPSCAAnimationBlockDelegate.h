@class NSString;

@interface CPSCAAnimationBlockDelegate : NSObject <CAAnimationDelegate> {
    id _referenceToSelf;
    id /* block */ _didStartHandler;
    id /* block */ _didStopHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)attachToAnimation:(id)a0 didStartHandler:(id /* block */)a1 didStopHandler:(id /* block */)a2;

- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;

@end
