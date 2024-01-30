@class NSPointerArray;
@protocol DOCKeyboardFocusable;

@interface DOCKeyboardFocusManager : NSObject {
    id<DOCKeyboardFocusable> _currentlyFocused;
}

@property (class, readonly) BOOL isCustomKeyboardFocusEnabled;
@property (class, readonly) DOCKeyboardFocusManager *sharedManager;

@property (retain) NSPointerArray *allKeyboardFocusable;
@property (nonatomic) BOOL externalFirstResponderInFlight;

+ (id)directionalKeyCommandsWithAction:(SEL)a0;

- (id)init;
- (void).cxx_destruct;
- (id)currentlyFocused;
- (BOOL)restoreCurrentlyFocused;
- (void)registerKeyboardFocusable:(id)a0;
- (BOOL)requestCurrentFocus:(id)a0;
- (void)unregisterKeyboardFocusable:(id)a0;
- (id)adjacentFocusableToFocusable:(id)a0 direction:(long long)a1;
- (void)_printAllRegisteredFocusable;
- (BOOL)_isRegistered:(id)a0;

@end
