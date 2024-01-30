@class NSString, CAStateController, CALayer, CAStateTransition, NSMutableArray;

@interface CAStateControllerTransition : NSObject <CAAnimationDelegate> {
    CAStateController *_controller;
    NSString *_masterKey;
    NSMutableArray *_animations;
}

@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) CAStateTransition *transition;
@property (readonly, nonatomic) double beginTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) float speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)addAnimation:(id)a0;
- (void)dealloc;
- (void)removeAnimationFromLayer:(id)a0 forKey:(id)a1;
- (id)init;
- (void)invalidate;

@end
