@class NSUserDefaults, NSMutableSet;

@interface FigCaptureProprietaryDefaults : NSObject {
    NSUserDefaults *_videoUserDefaults;
    NSUserDefaults *_audioUserDefaults;
    id /* block */ _defaultsChangedHandler;
    NSMutableSet *_observedKeys;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _changingDefaultsMyself;
}

+ (void)initialize;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)stopObservingChangesForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)observeChangesForKey:(id)a0;
- (id)initWithDefaultsChangedHandler:(id /* block */)a0;

@end
