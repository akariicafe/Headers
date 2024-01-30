@class NSMutableDictionary, CADisplayLink;

@interface CEKAnimationGenerator : NSObject

@property (retain, nonatomic) NSMutableDictionary *_animations;
@property (retain, nonatomic) CADisplayLink *_displayLink;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_handleDisplayLinkFired:(id)a0;
- (BOOL)isAnimatingForIdentifier:(id)a0;
- (void)startAnimationForIdentifier:(id)a0 duration:(double)a1 updateHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)stopAnimationForIdentifier:(id)a0;
- (void)stopAllAnimations;
- (void)_stopAnimationForIdentifier:(id)a0 didComplete:(BOOL)a1;
- (void)_updateAnimationForIdentifer:(id)a0 timestamp:(double)a1;

@end
