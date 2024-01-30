@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManager_zh_ja

- (BOOL)usesCandidateSelection;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (BOOL)supportsSetPhraseBoundary;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;

@end
