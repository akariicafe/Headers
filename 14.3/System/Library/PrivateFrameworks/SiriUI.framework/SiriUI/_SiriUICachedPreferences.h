@class NSUserDefaults;

@interface _SiriUICachedPreferences : NSObject {
    NSUserDefaults *_textInputDefaults;
    BOOL _textInputEnabled;
    BOOL _HTTForTextInputEnabled;
    BOOL _siriMiniIsEnabled;
    BOOL _streamingDictationIsEnabled;
    BOOL _siriSafeForLockScreen;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updatePreferences;
- (BOOL)isTextInputEnabled;
- (BOOL)isHTTForTextInputEnabled;
- (BOOL)isSiriMiniEnabled;
- (BOOL)isStreamingDictationEnabled;
- (BOOL)isSiriSafeForLockScreen;
- (void)_setSiriSafeForLockScreen:(BOOL)a0;

@end
