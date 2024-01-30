@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManager_zh_ja

- (BOOL)usesCandidateSelection;
- (BOOL)delayedCandidateList;
- (void)loadDictionaries;
- (BOOL)supportsSetPhraseBoundary;
- (id)keyboardBehaviors;
- (void)loadFavoniusTypingModel;

@end
