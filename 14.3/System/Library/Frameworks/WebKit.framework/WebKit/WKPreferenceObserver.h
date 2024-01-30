@interface WKPreferenceObserver : NSObject {
    struct Vector<WTF::RetainPtr<WKUserDefaults>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct RetainPtr<WKUserDefaults> *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_userDefaults;
}

+ (id)sharedInstance;

- (void)preferenceDidChange:(id)a0 key:(id)a1 encodedValue:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
