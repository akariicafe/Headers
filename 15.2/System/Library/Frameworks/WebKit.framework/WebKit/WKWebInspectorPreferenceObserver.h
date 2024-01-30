@interface WKWebInspectorPreferenceObserver : NSObject {
    struct RetainPtr<NSUserDefaults> { void *m_ptr; } m_userDefaults;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id).cxx_construct;

@end
