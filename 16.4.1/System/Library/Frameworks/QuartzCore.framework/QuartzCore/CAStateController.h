@class CALayer, NSObject;
@protocol CAStateControllerDelegate;

@interface CAStateController : NSObject {
    struct _CAStateControllerData { id x0; struct __CFDictionary *x1; id x2; id x3; } *_data;
}

@property (readonly) CALayer *layer;
@property (weak) NSObject<CAStateControllerDelegate> *delegate;

- (id)removeAllStateChanges;
- (void)setInitialStatesOfLayer:(id)a0;
- (id)stateOfLayer:(id)a0;
- (id)initWithLayer:(id)a0;
- (void)dealloc;
- (void)cancelTimers;
- (void)restoreStateChanges:(id)a0;
- (void)_removeTransition:(id)a0 layer:(id)a1;
- (void)_applyTransitionElement:(id)a0 layer:(id)a1 undo:(id)a2 speed:(float)a3;
- (void)setInitialStatesOfLayer:(id)a0 transitionSpeed:(float)a1;
- (void)_applyTransition:(id)a0 layer:(id)a1 undo:(id)a2 speed:(float)a3;
- (void)setState:(id)a0 ofLayer:(id)a1 transitionSpeed:(float)a2;
- (void)setState:(id)a0 ofLayer:(id)a1;
- (void)_nextStateTimer:(id)a0;
- (void)_addAnimation:(id)a0 forKey:(id)a1 target:(id)a2 undo:(id)a3;

@end
