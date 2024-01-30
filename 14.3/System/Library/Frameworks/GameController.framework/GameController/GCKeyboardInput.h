@class NSArray, NSSet;

@interface GCKeyboardInput : GCPhysicalInputProfile {
    NSArray *_keys;
    NSSet *_allCodes;
    BOOL _isActive;
    int _numberOfKeysPressed;
}

@property (copy, nonatomic) id /* block */ keyChangedHandler;
@property (readonly, nonatomic, getter=isAnyKeyPressed) BOOL anyKeyPressed;

- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (id)handlerQueue;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (id)name;
- (id)initWithController:(id)a0;
- (void)appDidBecomeActive;
- (id)productCategory;
- (void)appWillResignActive;
- (BOOL)hasButton:(long long)a0;
- (id)buttonForKeyCode:(long long)a0;
- (id)setElementValuesFromKeyboardInput:(id)a0;
- (BOOL)shouldFilterInternalEvent:(struct __IOHIDEvent { } *)a0;
- (void)setKeyValue:(long long)a0 down:(BOOL)a1;
- (void)setStateFromKeyboardInput:(id)a0;

@end
