@class NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FigDisplayMirroringChangeObserver : NSObject {
    struct OpaqueFigPlayer { } *_player;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_clonedDisplays;
    NSMutableSet *_cloningSupportedDisplays;
    NSArray *_baseDisplayList;
    BOOL _needToRemoveObserversOnCADisplays;
    void /* function */ *_callback;
    struct OpaqueFigCFWeakReferenceHolder { } *_weakCallbackContext;
}

- (void)setBaseDisplayList:(id)a0;
- (id)initWithPlayer:(struct OpaqueFigPlayer { } *)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeObserversOnCADisplays;
- (void)updatePlayerDisplayList;
- (id)init;
- (void)removeReferenceToPlayer;
- (id)initWithCallback:(void /* function */ *)a0 context:(void *)a1;
- (void)removeCallback;

@end
