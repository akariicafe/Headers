@class NSPointerArray;
@protocol DOCKeyboardFocusable;

@interface DOCKeyboardFocusManager : NSObject {
    id<DOCKeyboardFocusable> _currentlyFocused;
}

@property (class, readonly) BOOL isCustomKeyboardFocusEnabled;
@property (class, readonly) DOCKeyboardFocusManager *sharedManager;

@property (retain) NSPointerArray *allKeyboardFocusable;
@property (nonatomic) BOOL externalFirstResponderInFlight;

+ (void)_applySystemOverridePriority:(id)a0;
+ (id)allDirectionalKeyCommandsWithAction:(SEL)a0 prioritize:(BOOL)a1;
+ (id)directionalKeyCommandsWithAction:(SEL)a0 prioritize:(BOOL)a1;
+ (id)selectionKeyCommandsWithAction:(SEL)a0 prioritize:(BOOL)a1;
+ (id)systemProvidedDirectionalKeyCommandsWithAction:(SEL)a0 prioritize:(BOOL)a1;
+ (id)systemProvidedSelectionKeyCommandsWithAction:(SEL)a0 prioritize:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isRegistered:(id)a0;
- (void)_printAllRegisteredFocusable;
- (id)adjacentFocusableToFocusable:(id)a0 direction:(long long)a1;
- (id)currentlyFocused;
- (void)registerKeyboardFocusable:(id)a0;
- (BOOL)requestCurrentFocus:(id)a0;
- (BOOL)restoreCurrentlyFocused;
- (void)unregisterKeyboardFocusable:(id)a0;

@end
