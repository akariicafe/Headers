@interface _UIPencilPreferences : NSObject {
    long long _cachedPreferredTapAction;
    BOOL _cachedPrefersPencilOnlyDrawing;
    BOOL _cachedHasSeenPencilPairingUI;
}

@property (class, readonly, nonatomic) long long preferredTapAction;
@property (class, readonly, nonatomic) BOOL hasSeenPencilPairingUI;
@property (class, nonatomic) BOOL prefersPencilOnlyDrawing;

+ (id)sharedPreferences;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (BOOL)_hasSeenPencilPairingUI;
- (void)_hasSeenPencilPairingUIDidChange;
- (long long)_preferredTapAction;
- (void)_preferredTapActionDidChange;
- (BOOL)_prefersPencilOnlyDrawing;
- (void)_prefersPencilOnlyDrawingDidChange;
- (void)_setPrefersPencilOnlyDrawing:(BOOL)a0;

@end
