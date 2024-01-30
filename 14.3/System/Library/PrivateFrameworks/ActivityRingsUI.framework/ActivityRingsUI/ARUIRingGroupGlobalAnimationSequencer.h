@class NSString, ARUIObserverStore, CADisplayLink;

@interface ARUIRingGroupGlobalAnimationSequencer : NSObject <ARUIAnimationSequencing> {
    ARUIObserverStore *_observers;
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_updateDisplayLink;
- (void)_displayLinkFired:(id)a0;
- (void)addObserver:(id)a0;
- (id)_init;
- (BOOL)_needsDisplayLink;

@end
