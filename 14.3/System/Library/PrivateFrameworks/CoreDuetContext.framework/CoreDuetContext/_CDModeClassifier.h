@class ATXModeClassifier, NSUserDefaults;

@interface _CDModeClassifier : NSObject {
    NSUserDefaults *_userDefaults;
}

@property (retain) ATXModeClassifier *modeClassifier;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_enableFocusModesIfPossible;

@end
