@interface WKPreferenceObserver : NSObject {
    struct Vector<WTF::RetainPtr<WKUserDefaults>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } m_userDefaults;
}

+ (id)sharedInstance;

- (void)preferenceDidChange:(id)a0 key:(id)a1 encodedValue:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
