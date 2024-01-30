@interface _UIPencilPreferences : NSObject {
    long long _cachedPreferredTapAction;
    BOOL _cachedPrefersPencilOnlyDrawing;
    BOOL _cachedHasSeenPencilPairingUI;
}

@property (class, readonly, nonatomic) long long preferredTapAction;
@property (class, readonly, nonatomic) BOOL hasSeenPencilPairingUI;
@property (class, nonatomic) BOOL prefersPencilOnlyDrawing;

+ (id)sharedPreferences;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)_preferredTapAction;
- (void)_setPrefersPencilOnlyDrawing:(BOOL)a0;
- (BOOL)_hasSeenPencilPairingUI;
- (BOOL)_prefersPencilOnlyDrawing;
- (void)_prefersPencilOnlyDrawingDidChange;
- (void)_preferredTapActionDidChange;
- (void)_hasSeenPencilPairingUIDidChange;

@end
