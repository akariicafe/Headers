@interface _UIPencilPreferences : NSObject {
    long long _cachedPreferredTapAction;
    BOOL _cachedPrefersPencilOnlyDrawing;
    BOOL _cachedHasSeenPencilPairingUI;
}

@property (class, readonly, nonatomic) long long preferredTapAction;
@property (class, readonly, nonatomic) BOOL hasSeenPencilPairingUI;
@property (class, nonatomic) BOOL prefersPencilOnlyDrawing;

+ (id)sharedPreferences;

- (BOOL)_hasSeenPencilPairingUI;
- (void)_setPrefersPencilOnlyDrawing:(BOOL)a0;
- (long long)_preferredTapAction;
- (BOOL)_prefersPencilOnlyDrawing;
- (void)_prefersPencilOnlyDrawingDidChange;
- (void)_preferredTapActionDidChange;
- (void)_hasSeenPencilPairingUIDidChange;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
